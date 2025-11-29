@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, IESIMThrottleDebounceAction;

@interface IESIMUnavailableStateFetcher : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableSet *sessions;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> fetchThrottle;

+ (id)sharedFetcher;

- (void)__async:(id /* block */)a0;
- (void)requestAwemeInfoWithContext:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
