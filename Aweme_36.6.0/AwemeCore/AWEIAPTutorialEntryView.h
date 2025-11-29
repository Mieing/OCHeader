@class UIImageView, UILabel;

@interface AWEIAPTutorialEntryView : UIView

@property (retain, nonatomic) UIImageView *bellView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;

- (void)renderText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
