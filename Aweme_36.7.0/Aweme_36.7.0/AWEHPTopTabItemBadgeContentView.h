@class NSString, DUXBadge, UIView;

@interface AWEHPTopTabItemBadgeContentView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *badgeAnchorView;
@property (retain, nonatomic) DUXBadge *redDotView;
@property (retain, nonatomic) UIView *animateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)createBadgeAnimateView;
- (void)hideBadge;
- (void)performChangeAnimateWithPopAnimation:(id)a0 showAnimation:(id)a1;
- (id)showBadgeWithBadgeStyle:(unsigned long long)a0 badgeConfig:(id)a1 count:(long long)a2 text:(id)a3;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;

@end
