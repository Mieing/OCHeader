@class MMTimer, NSMutableArray, UIView;

@interface MMLiveDotLoadingView : UIView

@property (nonatomic) BOOL animate;
@property (nonatomic) int animationCount;
@property (retain, nonatomic) MMTimer *animationTimer;
@property (retain, nonatomic) NSMutableArray *animationDots;
@property (retain, nonatomic) UIView *dotContainerView;

- (void)layoutSubviews;
- (void)layoutDotViews;
- (void)animationTimerCheck;
- (void).cxx_destruct;

@end
