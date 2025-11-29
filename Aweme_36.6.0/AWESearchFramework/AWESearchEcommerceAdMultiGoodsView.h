@class UILabel, AWEAwemeModel;

@interface AWESearchEcommerceAdMultiGoodsView : AWESearchEcommerceMultiGoodsView

@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;

- (void)reloadEcommerceModel:(id)a0;
- (void)updateSubviewWithAdInfo;
- (void).cxx_destruct;
- (void)setupUI;

@end
