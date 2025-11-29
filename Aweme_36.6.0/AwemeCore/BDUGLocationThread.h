@interface BDUGLocationThread : NSObject

+ (void)locationResidentThreadEntryPoint:(id)a0;
+ (void)secondaryLocationResidentThreadEntryPoint:(id)a0;
+ (id)locationResidentThread;
+ (void)dispatchToLocationThread:(id /* block */)a0;
+ (id)secondaryLocationResidentThread;
+ (void)dispatchToSecondaryLocationThread:(id /* block */)a0;
+ (void)destorySecondaryLocationThread;
+ (void)destory;
+ (void)performBlock:(id /* block */)a0;

@end
