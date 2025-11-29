@class UILabel, UIView;

@interface AWEEcomSearchWindowShopTag : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) UILabel *levelLabel;

- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
