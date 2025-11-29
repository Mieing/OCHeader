@class UIImageView, NSDictionary, UILabel, BDImageView;

@interface BDASplashGoodsCard : UIView

@property (retain, nonatomic) BDImageView *backgroundView;
@property (retain, nonatomic) UILabel *goodsTitle;
@property (retain, nonatomic) UIImageView *arrowView;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSDictionary *urlDict;

- (void)updateSubviewLayout;
- (void)setGoodsTitleString:(id)a0;
- (void).cxx_destruct;
- (void)setBackgroundImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupView;
- (void)setArrowImage:(id)a0;

@end
