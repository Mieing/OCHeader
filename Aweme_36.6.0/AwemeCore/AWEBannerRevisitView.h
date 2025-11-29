@class UIImageView, NSString;

@interface AWEBannerRevisitView : UIView

@property (nonatomic) BOOL hasJumpButton;
@property (retain, nonatomic) UIImageView *background;
@property (retain, nonatomic) NSString *backgroundUrl;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ jumpAction;

- (void)setupCloseButton;
- (void)onClickCloseButton:(id)a0;
- (void)setupBackground;
- (void)showOn:(id)a0;
- (void)setupJumpButton;
- (void)onClickJumpButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
