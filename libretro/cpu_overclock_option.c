int handy_cpu_overclock;


static void getvars_cpu_overclock_option()
{
   struct retro_variable var = { "handy_cpu_overclock" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
      handy_cpu_overclock = atoi(var.value);
}
