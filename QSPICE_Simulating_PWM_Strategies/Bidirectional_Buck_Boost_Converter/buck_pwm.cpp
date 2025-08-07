// Automatically generated C++ file on Wed Aug  6 12:15:45 2025
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD buck_pwm.cpp kernel32.lib

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef d
#undef c
#undef g1
#undef g2
#undef mode
#undef direction
#undef g3
#undef g4

extern "C" __declspec(dllexport) void buck_pwm(void **opaque, double t, union uData *data)
{
   double  d         = data[0].d; // input
   double  c         = data[1].d; // input
   double  mode      = data[2].d; // input
   double  direction = data[3].d; // input
   double &g1        = data[4].d; // output
   double &g2        = data[5].d; // output
   double &g3        = data[6].d; // output
   double &g4        = data[7].d; // output

// Implement module evaluation code here:
                 if(direction>0){//forward
                   if(mode>0){//forward boost

                      if(d>c){
                        g4=15;
                      }else{
                         g4=-15;
                      }
                       g1=15;
                       g2=-10;
                       g3=-10;


                   }else{//forward buck

                      if(d>c){
                        g1=15;
                      }else{
                         g1=-15;
                      }
                      g2=-15;
                      g3=-15;
                      g4=-15;


                   }


                 }else{//reverse
                    if(mode>0){// reverse boost

                         if(d>c){
                           g3=15;
                         }else{
                           g3=-15;
                          }
                          g1=-15;
                          g2=-15;
                          g4=-15;

                   }else{// reverse buck

                       if(d>c){
                        g2=15.0;
                       }else{
                        g2=-15;
                       }
                        g3=15;
                       g1=-15;
                       g4=-15;

                   }

                 }

}
