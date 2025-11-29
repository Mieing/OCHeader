@class NSMutableDictionary, NSMutableSet;

@interface IESECBuyNowAsyncTwoStageTrackController : NSObject

@property (retain, nonatomic) NSMutableDictionary *delayEventMap;
@property (retain, nonatomic) NSMutableSet *delayEventKeySet;

+ (id)generateCacheKey:(id)a0;
+ (BOOL)needDelayTracker:(id)a0 eventName:(id)a1;
+ (BOOL)enableDelay;

- (void)saveTrackerInfo:(id)a0 eventName:(id)a1 params:(id)a2;
- (BOOL)isAsyncTwoStageReady:(id)a0;
- (void)trackAndRemoveDelayInfo:(id)a0 cacheKey:(id)a1 params:(id)a2;
- (void)reportAll:(id)a0;
- (BOOL)handleTracker:(id)a0 trackService:(id)a1 info:(id)a2 currentUsingCache:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
