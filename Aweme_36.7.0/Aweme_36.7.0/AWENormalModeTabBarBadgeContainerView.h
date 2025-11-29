@class NSString, DUXBadge, UIView;

@interface AWENormalModeTabBarBadgeContainerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) DUXBadge *badge;
@property (retain, nonatomic) UIView *animateSnapShotView;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;
@property (retain, nonatomic) DUXBadge *textBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)hideBadge;
- (void)performChangeAnimateWithPopAnimation:(id)a0 showAnimation:(id)a1;
- (id)createAnimateView;
- (id)showBadgeWithStyle:(unsigned long long)a0 count:(long long)a1 text:(id)a2 config:(id)a3;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
