@class NSString, CAShapeLayer, UILabel, UIView;

@interface IESGCPCGQueueView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (copy, nonatomic) id /* block */ onQuitButtonTapped;
@property (nonatomic) BOOL isShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustFrame;
- (void)updateRankNumber:(long long)a0;
- (void)animateWithKeyFrame;
- (void)quitButtonTapped:(id /* block */)a0;
- (id)rotationGroup;
- (void)minimizeQueue;
- (id)initWithRankNumber:(long long)a0;
- (void)hide:(id /* block */)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)layout;
- (void)show;
- (void)handlePanGesture:(id)a0;

@end
