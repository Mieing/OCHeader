@class AWENearbyHalfScreenZoomInFadeAnimation, AWENearbyHalfScreenDismissAnimator, UIView;

@interface AWENearbyHalfScreenDismissZoomInFadeAnimator : AWENearbyHalfScreenDismissAnimator

@property (retain, nonatomic) AWENearbyHalfScreenZoomInFadeAnimation *animation;
@property (retain, nonatomic) AWENearbyHalfScreenDismissAnimator *endingAnimator;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView *currentAnimationContent;

- (id)initWithAnimation:(id)a0 endingAnimator:(id)a1;
- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)caAnimation;
- (id)snapshot:(id)a0;

@end
