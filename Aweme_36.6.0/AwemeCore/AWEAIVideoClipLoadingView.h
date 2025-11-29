@class NSString, LOTAnimationView, UILabel;

@interface AWEAIVideoClipLoadingView : UIView

@property (copy, nonatomic) NSString *lottiePath;
@property (retain, nonatomic) LOTAnimationView *loadingAnimationView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double loadingStartTime;

+ (void)showOnView:(id)a0;
+ (void)showOnView:(id)a0 afterDelay:(double)a1;
+ (void)dismiss;
+ (void)show;
+ (void)dismissAfter:(double)a0;

- (id)initWithLottiePath:(id)a0;
- (void)p_showAIVideoClipGlobalLoadingViewOnView:(id)a0;
- (void)_trackLoadingTimeWithScene:(long long)a0;
- (void).cxx_destruct;

@end
