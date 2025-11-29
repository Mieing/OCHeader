@class NSArray;

@interface IESECPDPSlideViewRespModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *productList;

+ (id)productListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
