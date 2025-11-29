@class UIButton, YYAnimatedImageView;

@interface AWEBadNetworkStateView : UIView

@property (retain, nonatomic) YYAnimatedImageView *wifiImageView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *solutionButton;
@property (nonatomic) BOOL hasSetup;

- (void)setupIfNeed;
- (void)showSolution;
- (void)_toggleAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)_startAnimation;
- (void)layoutSubviews;
- (void)dealloc;

@end
