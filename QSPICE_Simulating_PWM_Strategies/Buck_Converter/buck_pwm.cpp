// Automatically generated C++ file on Fri Jul 25 21:38:35 2025
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
#undef g

extern "C" __declspec(dllexport) void buck_pwm(void **opaque, double t, union uData *data)
{
   double  d = data[0].d; // input
   double  c = data[1].d; // input
   double &g = data[2].d; // output


// Implement module evaluation code here:
 if(d>c){
         g=15.0;

     }
     else{
         g=-15.0;
     }
}
