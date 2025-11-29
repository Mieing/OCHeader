@class NSArray, IESECommerceGoodsDetailNavBarConfig;

@interface IESECGoodsDetailNavBarModel : IESECBaseApiModel

@property (copy, nonatomic) NSArray *slices;
@property (retain, nonatomic) IESECommerceGoodsDetailNavBarConfig *config;

+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)firstSlice;
- (void).cxx_destruct;

@end
