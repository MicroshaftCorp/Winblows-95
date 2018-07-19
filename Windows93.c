#include "win31.h"
#include "win95.h"
#include "evenmore.h"
#include "oldstuff.h"
#include "billrulz.h"
#define INSTALL = HARD
 
char make_prog_look_big[1600000];
void main()
{
    while(!CRASHED)
    {
        display_copyright_message();
        display_bill_rules_message();
        do_nothing_loop();
        if (first_time_installation)
        {
            make_50_megabyte_swapfile();
            do_nothing_loop();
            totally_screw_up_HPFS_file_system();
            search_and_destroy_the_rest_of_OS/2();
            hang_system();
        }
 
        write_something(anything);
        display_copyright_message();
        do_nothing_loop();
        do_some_stuff();
 
        if (still_not_crashed)
        {
            display_copyright_message();
            do_nothing_loop();
            basically_run_windows_3.1();
            do_nothing_loop();
            do_nothing_loop();
        }
    }
 
    if (detect_cache())
        disable_cache();
 
    if (fast_cpu())
    {
         set_wait_states(lots);
         set_mouse(speed, very_slow);
         set_mouse(action, jumpy);
         set_mouse(reaction, sometimes);
    }
 
    /* printf("Welcome to Windows 3.11"); */
    /* printf("Welcome to Windows 95"); */
    printf("Welcome to Winblows 95");
    if (system_ok())
        crash(to_dos_prompt)
    else
        system_memory = open("a:\swp0001.swp", O_CREATE);
 
    while(something)
    {
        sleep(5);
        get_user_input();
        sleep(5);
        act_on_user_input();
        sleep(5);
    }
    create_general_protection_fault();
}

MainThread(void)
{
     char yorn;
     Open(ALL_INET_PORTS);
     Display(CopyrightInfo());
     Boot(Sys.DOS);
     Spinoff(GUI_OFF_DOS);
     if(ClockedAt > .5){SlowDown(ALL_PROCESSES);}
     else
     {
           Display(CopyrightInfo());
           printf("Cannot boot Win95\n");
           printf("Starting core file (aka Win3.1)\n");
           Boot(Sys.DOS->Win3p1);
           SlowDown(ALL_PROCESSES);
      }
      Start(UNWANTED_APPS);
      ReInstall(UNWANTED_APPS);
      Move(RndFileChunk, RecycleBin);
      SpyOn(USER);
      if(user == intelligent) { steal_ideas(); }
      Display(CopyrightInfo());
      for(int billrulz = 0; billrulz < 30; billrulz++)
      {
            Randomize(ERROR_MSGS);
            Display(ERROR_MSGS);
      }
       if(fullmoon) { printf("full moon!"); }
       if(Y2K_COMPLIANT) { crash(); }
       Download(MS_UPDATES);
       if(!Register) 
       { 
             reboot();
             printf("Format  C:? (Y/N)");
             yorn = getch();
             if(tolower(yorn) == 'y' || tolower(yorn) == 'n')
                 System("Format C: -override");
        }
}
