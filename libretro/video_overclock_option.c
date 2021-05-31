int video_overclock;


static void getvars_video_overclock_option()
{
   struct retro_variable var = { "handy_video_overclock" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (!strcmp(var.value, "disabled"))
         video_overclock = 0;
      else if (!strcmp(var.value, "enabled"))
         video_overclock = 1;
   }
}
