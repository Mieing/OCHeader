@class UIImageView, UILabel;

@interface AWECoverChooseActionButton : ACCButton

@property (readonly, nonatomic) UIImageView *iconView;
@property (readonly, nonatomic) UILabel *label;

- (void)setLeftMargin:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRightMargin:(double)a0;
- (void)setSpace:(double)a0;

@end
