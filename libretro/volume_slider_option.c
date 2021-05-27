int retro_master_volume = 100;


void getvars_volume_slider_option()
{
   struct retro_variable var = { "handy_master_volume" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      retro_master_volume = atoi(var.value);
}
