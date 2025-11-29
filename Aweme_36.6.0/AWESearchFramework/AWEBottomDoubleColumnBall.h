@class UIImageView, UILabel, NSTimer;

@interface AWEBottomDoubleColumnBall : UIView

@property (weak, nonatomic) UIImageView *icon;
@property (weak, nonatomic) UILabel *buttonTitle;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long status;

- (void)foldButton;
- (void)unfoldButton;
- (void)foldLayout;
- (void)unfoldLayout;
- (void)showDobleColumnButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setupLayout;

@end
