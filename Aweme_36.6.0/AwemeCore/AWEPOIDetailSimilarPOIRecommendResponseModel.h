@class NSArray;

@interface AWEPOIDetailSimilarPOIRecommendResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *similarPoiList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long cursor;

+ (id)similarPoiListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
