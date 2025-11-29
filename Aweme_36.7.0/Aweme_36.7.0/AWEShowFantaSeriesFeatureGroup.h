@class NSMutableDictionary;

@interface AWEShowFantaSeriesFeatureGroup : AWEShowFantaFeature

@property (retain, nonatomic) NSMutableDictionary *seriesFeaturesByPlayletID;

+ (id)seriesFeaturesByPlayletIDJSONTransformer;
+ (id)featureKey;
+ (id)JSONKeyPathsByPropertyKey;

- (void)updateFeatureForPlayletID:(id)a0 updateHandler:(id /* block */)a1;
- (void)clearDataWhenExpired;
- (id)transformFeatureValueForModelJson:(id)a0;
- (id)getSeriesFeatureWithPlayletID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExpired;

@end
