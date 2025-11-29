@interface AWETokamakThreadABTest : NSObject

+ (void)createGCDThread:(unsigned long long)a0;
+ (void)createPThread:(unsigned long long)a0;
+ (void)createPThread:(unsigned long long)a0 withMemorySize:(unsigned long long)a1;
+ (void)execute;

@end
