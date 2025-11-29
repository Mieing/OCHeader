@class UILabel, UIImageView, UIImage;

@interface BDUGLuckyCountdownBubbleView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) BOOL isShowing;

+ (id)sharedBubble;
+ (id)showText:(id)a0 targetView:(id)a1;

- (id)timingBundle;
- (void)showText:(id)a0 targetView:(id)a1;
- (void).cxx_destruct;
- (void)hide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
