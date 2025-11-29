@class AWEGrouponHalfScreenZoomInAnimation, AWEGrouponHalfScreenDismissAnimator, UIView;

@interface AWEGrouponHalfScreenDismissZoomInAnimator : AWEGrouponHalfScreenDismissAnimator

@property (retain, nonatomic) AWEGrouponHalfScreenZoomInAnimation *animation;
@property (retain, nonatomic) AWEGrouponHalfScreenDismissAnimator *endingAnimator;
@property (retain, nonatomic) UIView *currentAnimationContent;

- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (id)initWithAnimation:(id)a0 endingAnimator:(id)a1;
- (void)dismissWithAttachAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (id)snapshot:(id)a0;

@end
