@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDASKNetworkManager : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSMutableDictionary *adImpressionMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;

+ (id)convertProductParamsWithSKAdParamString:(id)a0;
+ (id)convertSKAdImpressionParamsWithSKAdParamString:(id)a0;
+ (id)sharedInstance;

- (void)endImpressionWithSkanParamsString:(id)a0 adEventData:(id)a1 completionHandler:(id /* block */)a2;
- (void)startImpressionWithSkanParamsString:(id)a0 adEventData:(id)a1 completionHandler:(id /* block */)a2;
- (void)trackEvent:(id)a0 adImpression:(id)a1 extraData:(id)a2;
- (void)trySendAllEndImpressions;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)dealloc;

@end
