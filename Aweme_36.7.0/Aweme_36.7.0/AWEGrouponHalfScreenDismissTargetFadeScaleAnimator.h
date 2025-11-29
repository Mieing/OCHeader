@class AWEGrouponHalfScreenTargetFadeScaleAnimation;

@interface AWEGrouponHalfScreenDismissTargetFadeScaleAnimator : AWEGrouponHalfScreenDismissAnimator

@property (retain, nonatomic) AWEGrouponHalfScreenTargetFadeScaleAnimation *animation;
@property (copy, nonatomic) id /* block */ completion;

- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)caAnimation;
- (id)initWithAnimation:(id)a0;

@end
