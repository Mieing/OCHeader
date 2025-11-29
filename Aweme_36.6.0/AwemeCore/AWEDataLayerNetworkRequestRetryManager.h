@class NSMutableDictionary;
@protocol AWEDataLayerNetworkRequestRetryManagerDelegate;

@interface AWEDataLayerNetworkRequestRetryManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *requestsMap;
@property (weak, nonatomic) id<AWEDataLayerNetworkRequestRetryManagerDelegate> delegate;

+ (id)sharedManager;

- (void)enqueueRetryRequest:(id)a0;
- (void)retryTimerTrigger:(id)a0;
- (void).cxx_destruct;

@end
