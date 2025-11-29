@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEEcomSearchAsyncTrackManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;
@property (nonatomic) BOOL enableAsync;

+ (id)sharedInstance;

- (void)trackEvent:(id)a0 paramsBuilder:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
