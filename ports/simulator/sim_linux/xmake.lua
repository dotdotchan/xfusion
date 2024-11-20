add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"})

includes(path.join("../../../boards/simulator/sim_linux/.xfusion/xmake.lua"))

target("port_xf")
    set_kind("static")
    add_deps("xf_build_desc")
    add_includedirs(".", {public = true})
    add_includedirs("json")
    add_files("*.c")
    add_files("json/*.c")
    add_files("osal/xf_osal_thread.c")
    add_files("osal/xf_osal_kernel.c")
    add_files("osal/xf_osal_mutex.c")
    add_files("osal/xf_osal_semaphore.c")
    add_files("osal/xf_osal_queue.c")
    add_files("osal/xf_osal_event.c")
    add_ldflags("-lwebsockets")
    add_ldflags("-lpthread")
    set_optimize("none")
