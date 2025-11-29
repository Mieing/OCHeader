@class NSArray, NSString, AWEHotSpotModel;

@interface AWESearchHotSpotAladdinModel : AWEBaseApiModel

@property (retain, nonatomic) AWEHotSpotModel *hotSpotModel;
@property (copy, nonatomic) NSArray *hotSpotVideoArray;
@property (retain, nonatomic) NSArray *relatedInfoModels;
@property (readonly, nonatomic) BOOL isHotSpotCollectionMode;
@property (readonly, nonatomic) NSString *trendingMeasure;

+ (id)hotSpotVideoArrayJSONTransformer;
+ (id)hotSpotModelJSONTransformer;
+ (id)relatedInfoModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)rawHotSpotVideoArray;
- (void).cxx_destruct;

@end
