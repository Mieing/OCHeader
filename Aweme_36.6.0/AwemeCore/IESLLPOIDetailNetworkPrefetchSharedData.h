@class NSMutableDictionary, NSMutableArray;

@interface IESLLPOIDetailNetworkPrefetchSharedData : NSObject

@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSMutableArray *keys;

+ (id)sharedInstance;

- (id)generatePoiEnterID;
- (void)setPoiEnterID:(id)a0 forKey:(id)a1;
- (id)generatePoiEnterIDWithKey:(id)a0;
- (id)poiEnterIDForKey:(id)a0;
- (void)removePoiEnterIDWithCacheKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
