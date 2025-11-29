@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface XPlayNetworkMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *listeners;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

+ (id)sharedInstance;

- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;
- (void)logResponse:(id)a0;

@end
