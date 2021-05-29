int memory_overclock = 0;


static void getvars_memory_overclock_option()
{
   struct retro_variable var = { "handy_memory_overclock" };

   if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var) && var.value)
   {
      if (!strcmp(var.value, "disabled"))
         memory_overclock = 0;
      else if (!strcmp(var.value, "enabled"))
         memory_overclock = 1;
   }
}
