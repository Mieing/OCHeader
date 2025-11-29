@class AWEGrouponHalfScreenAnimation, AWEGrouponHalfScreenShowAnimator;
@protocol AWEGrouponHalfScreenShowAnimationProvider;

@interface AWEGrouponHalfScreenShowAnimationController : NSObject

@property (retain, nonatomic) AWEGrouponHalfScreenShowAnimator *showAnimator;
@property (weak, nonatomic) id<AWEGrouponHalfScreenShowAnimationProvider> delegate;
@property (readonly, nonatomic) AWEGrouponHalfScreenAnimation *currentAnimation;

- (void)animationHalfScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animationFullScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)show:(unsigned long long)a0 withAttachAnimation:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)show:(unsigned long long)a0;

@end
