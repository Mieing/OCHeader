@class AWEGrouponHalfScreenSheetAnimation;

@interface AWEGrouponHalfScreenShowSheetAnimator : AWEGrouponHalfScreenShowAnimator

@property (retain, nonatomic) AWEGrouponHalfScreenSheetAnimation *animation;

- (void)animationHalfScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)animationFullScreenWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)show;
- (id)initWithAnimation:(id)a0;

@end
