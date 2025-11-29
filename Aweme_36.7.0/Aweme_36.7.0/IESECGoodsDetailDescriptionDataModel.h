@class NSArray;

@interface IESECGoodsDetailDescriptionDataModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *detailConfig;

+ (id)detailConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
