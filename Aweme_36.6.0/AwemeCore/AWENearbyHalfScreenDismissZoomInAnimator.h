@class AWENearbyHalfScreenZoomInAnimation, AWENearbyHalfScreenDismissAnimator, UIView;

@interface AWENearbyHalfScreenDismissZoomInAnimator : AWENearbyHalfScreenDismissAnimator

@property (retain, nonatomic) AWENearbyHalfScreenZoomInAnimation *animation;
@property (retain, nonatomic) AWENearbyHalfScreenDismissAnimator *endingAnimator;
@property (retain, nonatomic) UIView *currentAnimationContent;

- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (id)initWithAnimation:(id)a0 endingAnimator:(id)a1;
- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)snapshot:(id)a0;

@end
