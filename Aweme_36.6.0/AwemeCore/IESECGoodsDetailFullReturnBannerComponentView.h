@class NSDictionary, IESECFullReturnBannerView;

@interface IESECGoodsDetailFullReturnBannerComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) NSDictionary *fullReturnDict;
@property (retain, nonatomic) IESECFullReturnBannerView *fullReturnBannerView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openFullReturn;
- (void).cxx_destruct;

@end
