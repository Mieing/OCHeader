@class UILabel, UIImageView, NSString;

@interface AWESearchBottomTipsView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *leftIcon;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isDismissing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setShowAnimation;
- (void)setHideAnimation;
- (void)configWithContent:(id)a0;
- (void)hideTips;
- (void)showOnView:(id)a0 content:(id)a1 yOffset:(double)a2;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
