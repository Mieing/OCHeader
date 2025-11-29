@class UIView;

@interface IESLiveRotatingView : UIView

@property (nonatomic) BOOL waitingForAnimate;
@property (copy, nonatomic) id /* block */ viewCreateBlock;
@property (nonatomic) double transalateDistance;
@property (nonatomic) double translateAnimationTime;
@property (nonatomic) double alphaAnimationTime;
@property (retain, nonatomic) UIView *firstView;
@property (nonatomic) long long animationDirection;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCreateViewBlock:(id /* block */)a0;

@end
