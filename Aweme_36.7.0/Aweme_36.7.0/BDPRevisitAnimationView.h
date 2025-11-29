@class UIImageView, NSString;

@interface BDPRevisitAnimationView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ didFinishedBlock;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) NSString *businessSubId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0 style:(unsigned long long)a1 dismissPosition:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)p_showStyleAAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)p_showStyleBAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)p_showStyleCAnimationWithPosition:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)p_doHPIconAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1;

@end
