set(srcs "display.c"
    "main.c"
    "decode_image.c"
    )

idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS "."
                    EMBED_FILES image.jpg)
