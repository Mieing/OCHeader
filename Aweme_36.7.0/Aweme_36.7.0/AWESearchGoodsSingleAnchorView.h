@class AWEEcomSearchWebImageView, UIImageView, UILabel, UIView, AWEEcomSearchMarqueeView;

@interface AWESearchGoodsSingleAnchorView : UIView

@property (retain, nonatomic) AWEEcomSearchWebImageView *goodImageView;
@property (retain, nonatomic) UILabel *goodTitle;
@property (retain, nonatomic) UIView *sellPointsView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *priceTailLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *leftTopIcon;
@property (retain, nonatomic) AWEEcomSearchMarqueeView *marqueeView;

- (void)configWithModel:(id)a0;
- (id)douyinNumberABCFontOfSize:(double)a0 weight:(double)a1;
- (id)attributedPriceLineFromModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
