@class NSDictionary, NSMutableDictionary;

@interface AWEElementServerStrategiesCache : NSObject

@property (retain, nonatomic) NSDictionary *globalOfflineStrategies;
@property (nonatomic) BOOL didLoadGlobalOfflineStrategies;
@property (retain, nonatomic) NSMutableDictionary *strategiesCacheMaps;

+ (id)sharedCache;

- (id)getElementStrategiesMapsWithReferString:(id)a0 model:(id)a1;
- (void).cxx_destruct;

@end
