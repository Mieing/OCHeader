@class UIImageView, UILabel;

@interface AWEPOIScreenShotItemView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)itemWithTitle:(id)a0 image:(id)a1 action:(id /* block */)a2;

- (void)onTapView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
