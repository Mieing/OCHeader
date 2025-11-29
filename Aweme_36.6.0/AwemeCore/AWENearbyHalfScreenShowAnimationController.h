@class AWENearbyHalfScreenAnimation, AWENearbyHalfScreenShowAnimator;
@protocol AWENearbyHalfScreenShowAnimationProvider;

@interface AWENearbyHalfScreenShowAnimationController : NSObject

@property (retain, nonatomic) AWENearbyHalfScreenShowAnimator *showAnimator;
@property (weak, nonatomic) id<AWENearbyHalfScreenShowAnimationProvider> delegate;
@property (readonly, nonatomic) AWENearbyHalfScreenAnimation *currentAnimation;

- (void)animationHalfScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animationFullScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)show:(unsigned long long)a0 withAttachAnimation:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)show:(unsigned long long)a0;

@end
