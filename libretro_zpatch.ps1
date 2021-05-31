git_merge thread_storage_fix


# ============================= #


git_merge audio_settings_quality
git_merge blip_buffer_quality


# ============================= #


git_merge libretro_option


git_resolve cpu_overclock_option both libretro/retro_setenv_front.h libretro/retro_getvars_front.h libretro/retro_getvars.c
git_resolve video_overclock_option both libretro/retro_setenv_front.h libretro/retro_getvars_front.h libretro/retro_getvars.c


git_resolve volume_slider_option both libretro/retro_setenv_back.h libretro/retro_getvars_front.h libretro/retro_getvars.c
