AddonBuilder clone do(
    dependsOnLib("cairo")
    dependsOnHeader("cairo.h")

    debs	atPut("cairo", "libcairo2-dev")
    pkgs	atPut("cairo", "cairo-devel")
)
