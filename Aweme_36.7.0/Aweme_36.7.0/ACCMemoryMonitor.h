@interface ACCMemoryMonitor : NSObject

+ (void)startMemoryMonitorForContext:(id)a0 tartgetClasses:(id)a1 maxInstanceCount:(unsigned long long)a2;
+ (void)addObject:(id)a0 forContext:(id)a1;
+ (void)stopMemoryMonitorForContext:(id)a0;
+ (void)startCheckMemoryLeaks:(id)a0;
+ (id)alertPresentationController;
+ (void)ignoreContext:(id)a0;
+ (void)setup;

@end
