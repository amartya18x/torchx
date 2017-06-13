package = "torchx"
version = "scm-1"

source = {
   url = "git://github.com/amartya18x/torchx",
   tag = "AliasCuda"
}

description = {
   summary = "torch extensions",
   detailed = [[
   	    Experimental torch extensions
   ]],
   homepage = "https://github.com/amartya18x/torchx/blob/master/README.md"
}

dependencies = {
   "torch >= 7.0",
   "paths >= 1",
   "sys >= 1.1",
   "nn >= 1.0"
}

build = {
   type = "command",
   build_command = [[
git submodule init
git submodule update
cmake -E make_directory build;
cd build;
echo "$(PREFIX)"
echo "$(LUA_BINDIR)"
cmake .. -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH="$(LUA_BINDIR)/.." -DCMAKE_INSTALL_PREFIX="$(PREFIX)"; 
$(MAKE)
   ]],
   install_command = "cd build && $(MAKE) install"
}
