@class AWESearchMerchandiseModel, NSArray;

@interface AWESearchMerchandiseResultModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandiseModel *merchandiseModel;
@property (copy, nonatomic) NSArray *positions;

+ (id)positionsJSONTransformer;
+ (id)merchandiseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
