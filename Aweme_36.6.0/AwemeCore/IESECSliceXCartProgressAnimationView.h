@class NSString, CAGradientLayer, UIView;

@interface IESECSliceXCartProgressAnimationView : IESECSliceXViewElementView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *progressHandler;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double currentPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)triggerProgressAnimationHide;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
