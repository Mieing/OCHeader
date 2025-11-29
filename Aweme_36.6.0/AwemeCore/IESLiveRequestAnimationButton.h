@class UIImageView, UILabel, NSString;

@interface IESLiveRequestAnimationButton : IESLiveButton

@property (retain, nonatomic) UIImageView *animationView;
@property (retain, nonatomic) UILabel *animationLabel;
@property (nonatomic) BOOL isAnimation;
@property (copy, nonatomic) NSString *recordTitle;

- (void)receiveAppWillBecomeForegroundNotification;
- (void)addAnimationViewAndTitle;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)createAnimation;

@end
