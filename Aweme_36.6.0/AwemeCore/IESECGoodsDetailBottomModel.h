@class NSArray, IESECGoodsDetailBottomConfig;

@interface IESECGoodsDetailBottomModel : IESECBaseApiModel

@property (retain, nonatomic) IESECGoodsDetailBottomConfig *config;
@property (copy, nonatomic) NSArray *slices;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
