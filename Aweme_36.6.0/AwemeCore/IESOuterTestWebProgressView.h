@class CALayer, UIColor, NSString;

@interface IESOuterTestWebProgressView : UIView <CAAnimationDelegate>

@property (nonatomic) double progress;
@property (retain, nonatomic) CALayer *progressLayer;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double progressHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startProgressAnimatingWithDuration:(double)a0;
- (void)startProgressingWithEstimatedProgress:(double)a0;
- (void)finishProgressing;
- (void)didAddToOuterTestViewWithLayoutTop:(id)a0 bottom:(id)a1 leading:(id)a2 trailing:(id)a3;
- (void)didStartLoadingOuterTestWithEstimatedProgress:(double)a0;
- (void)didFinishLoadingOuterTestWithCompletion:(id /* block */)a0;
- (void)didUpdateLoadingWithProgress:(double)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)didMoveToSuperview;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
