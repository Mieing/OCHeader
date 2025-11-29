@class IESECPriceInfoComponentViewV3, IESECGoodsDetailBaseComponentView, IESECPriceInfoComponentViewV2;

@interface IESECPriceInfoComponentContainer : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECPriceInfoComponentViewV2 *priceComponentV2;
@property (retain, nonatomic) IESECPriceInfoComponentViewV3 *priceComponentV3;
@property (retain, nonatomic) IESECGoodsDetailBaseComponentView *currentComponent;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;
+ (BOOL)enablePriceV3WithParams:(id)a0;

- (void)updateWithParameters:(id)a0;
- (void).cxx_destruct;

@end
