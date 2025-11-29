@class AWEAwemeModel, AWESearchEcommerceAdSingleGoodsView, AWESearchEcommerceAdMultiGoodsView;

@interface AWESearchEcommerceAdGoodsView : AWESearchEcommerceGoodsView

@property (retain, nonatomic) AWESearchEcommerceAdSingleGoodsView *adSingleGoodsView;
@property (retain, nonatomic) AWESearchEcommerceAdMultiGoodsView *adMultiGoodsView;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)reloadEcommerceModel:(id)a0;
- (void)trackOtherShowWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
