@class IESLiveWebpLoadingView;

@interface IESShareLoadingView : UIView

@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;

+ (void)dismissLoadingView;
+ (id)sharedView;
+ (void)showLoadingView;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)init;
- (void)setupView;

@end
