@class UIImageView, UILabel, NSTimer;

@interface AWEBottomDoubleColumnButton : UIView

@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *arrow;
@property (retain, nonatomic) UILabel *buttonTitle;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL shouldShow;

- (void)showAnimation;
- (void)updateWithURLModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideAnimation;
- (void)setupUI;

@end
