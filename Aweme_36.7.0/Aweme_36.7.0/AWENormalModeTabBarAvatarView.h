@class UIImageView, UIViewPropertyAnimator, NSString;
@protocol AWENormalModeTabBarAvatarViewDelegate;

@interface AWENormalModeTabBarAvatarView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *avatarIconImageView;
@property (retain, nonatomic) UIImageView *oldAvatarIconImageView;
@property (retain, nonatomic) UIViewPropertyAnimator *showAvatarIconAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideAvatarIconAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *hideAvatarContainerAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *showAvatarContainerAnimator;
@property (weak, nonatomic) id<AWENormalModeTabBarAvatarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (void)p_cancelAllAnimation;
- (void)p_hideAvatarIcon:(BOOL)a0;
- (void)p_showAvatarIconWithImage:(id)a0 animated:(BOOL)a1;
- (BOOL)isShowingAvatar;
- (void)p_startHideAvatarIconAnimation;
- (id)p_avatarIconImageViewWithImage:(id)a0;
- (void)p_startAvatarIconChangeAnimationWithImage:(id)a0;
- (void)p_startAvatarIconShowAnimationWithImage:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithDelegate:(id)a0;

@end
