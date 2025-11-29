@class NSArray, UIStackView;

@interface IESECGoodsDetailTagsBannerComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) NSArray *cachedViews;
@property (retain, nonatomic) UIStackView *container;

- (void)updateWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)setupSubviews:(id)a0;
- (void)updateSubviewsDelegate;
- (void).cxx_destruct;

@end
