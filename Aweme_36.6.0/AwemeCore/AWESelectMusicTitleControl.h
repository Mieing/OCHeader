@class UILabel, UIView;

@interface AWESelectMusicTitleControl : UIControl

@property (retain, nonatomic) UILabel *aweTitleLabel;
@property (retain, nonatomic) UIView *backgroundColorView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } paddings;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
