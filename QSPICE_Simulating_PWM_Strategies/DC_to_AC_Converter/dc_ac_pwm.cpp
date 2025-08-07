// Automatically generated C++ file on Thu Aug  7 10:17:47 2025
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD dc_ac_pwm.cpp kernel32.lib

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
#undef c
#undef g1
#undef g2
#undef m

extern "C" __declspec(dllexport) void dc_ac_pwm(void **opaque, double t, union uData *data)
{
   double  c  = data[0].d; // input
   double  m  = data[1].d; // input
   double &g1 = data[2].d; // output
   double &g2 = data[3].d; // output

// Implement module evaluation code here:
        if(m>c){
             g1=15;
             g2=-15;

             }else{
             g1=-15;
             g2=15;
             }



}
