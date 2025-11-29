@interface LynxThreadManager : NSObject

+ (BOOL)isMainQueue;
+ (id)queueDictionary;
+ (void)executeRunloop:(id /* block */)a0;
+ (void)threadRun:(id /* block */)a0;
+ (id)getQueueWithPrefix:(id)a0;
+ (id)getCachedQueueWithPrefix:(id)a0;
+ (void)createIOSThread:(id)a0 runnable:(id /* block */)a1;
+ (void)runBlockInMainQueue:(id /* block */)a0;
+ (void)runInTargetQueue:(id)a0 runnable:(id /* block */)a1;

@end
