@class HTSLiveAnimationRocket, NSString, UIImageView, UIView;

@interface HTSRocketMarqueeView : UIView <HTSLiveAnimationView>

@property (retain, nonatomic) HTSLiveAnimationRocket *animation;
@property (copy, nonatomic) id /* block */ onCompletion;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInView:(id)a0 completion:(id /* block */)a1;
- (id)initWithAnimation:(id)a0 diContext:(id)a1;
- (id)setImage:(id)a0 scale:(double)a1 flexSetting:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stopFrame:(double)a0 height:(double)a1;
- (id)gradientLayer:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismiss;
- (double)screenHeight;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)labelFont;
- (double)topMargin;
- (void)cancel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (double)containerWidth;

@end
