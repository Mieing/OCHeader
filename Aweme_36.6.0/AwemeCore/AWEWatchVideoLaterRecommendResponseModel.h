@class NSArray;

@interface AWEWatchVideoLaterRecommendResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
