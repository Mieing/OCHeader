@class NSObject;
@protocol OS_dispatch_queue;

@interface BDPreloadUtil : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *preloadTaskQueue;

+ (BOOL)isWifiConnected;
+ (void)taskAsyncInPreloadQueue:(id /* block */)a0;

@end
