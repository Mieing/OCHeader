@class UIButton, CAGradientLayer, NSNumber;

@interface BDPVideoTopBar : UIView

@property (retain, nonatomic) CAGradientLayer *bgLayer;
@property (retain, nonatomic) UIButton *exitFullScreenBtn;
@property (retain, nonatomic) UIButton *screenCastButton;
@property (retain, nonatomic) UIButton *screenLockButton;
@property (retain, nonatomic) UIButton *morePanelButton;
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL screenLock;
@property (copy, nonatomic) NSNumber *direction;
@property (copy, nonatomic) id /* block */ backClickAction;
@property (copy, nonatomic) id /* block */ screenCastClickAction;
@property (copy, nonatomic) id /* block */ screenLockClickAction;
@property (copy, nonatomic) id /* block */ morePanelClickAction;

- (void)btnAction;
- (void)screenCastButtonClicked;
- (void)adjustFullScreen:(BOOL)a0 direction:(id)a1;
- (void)screenLockButtonClicked;
- (void)morePanelButtonClicked;
- (void)adjustButtonShow;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;

@end
