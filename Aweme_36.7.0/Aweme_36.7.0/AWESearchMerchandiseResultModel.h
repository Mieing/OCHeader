@class NSArray;

@interface AWESearchMerchandiseResultModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *positions;

+ (id)positionsJSONTransformer;
+ (id)merchandiseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
