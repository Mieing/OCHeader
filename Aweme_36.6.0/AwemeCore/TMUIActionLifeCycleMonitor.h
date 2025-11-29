@interface TMUIActionLifeCycleMonitor : NSObject

+ (void)didFinishLaunching:(id)a0;
+ (void)didBecomeActive:(id)a0;
+ (void)willResignActive:(id)a0;
+ (void)didEnterBackground:(id)a0;
+ (void)willEnterForeground:(id)a0;
+ (void)willTerminate:(id)a0;
+ (void)startMonitor;

@end
