@class AWEEcomSearchGoodsMaskView;

@interface AWESearchMerchandiseSingleOriginGoodsCell : AWESearchMerchandiseGoodsBaseCell

@property (retain, nonatomic) AWEEcomSearchGoodsMaskView *goodsMaskView;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)setSearchInfoDict:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
