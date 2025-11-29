@class UIImageView, UILabel, NSString;

@interface AWEPlayInteractionDislikeBottomNotification : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ withdrawBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startAutoHideIfNeeded;
- (void)updateIconWithImage:(id)a0;
- (void)setShowAnimation;
- (void)setHideAnimation;
- (void)didClickLinkButton;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)show;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;

@end
