@class NSDictionary;

@interface IESECGoodsDetailPendantComponentDataModel : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *pendants;

+ (id)pendantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
