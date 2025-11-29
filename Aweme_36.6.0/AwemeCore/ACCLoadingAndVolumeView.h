@class UIView;

@interface ACCLoadingAndVolumeView : UIView

@property (nonatomic) BOOL showVolume;
@property (nonatomic) long long status;
@property (nonatomic) double lastVolume;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *animationView;
@property (retain, nonatomic) UIView *volumeView;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) float progress;
@property (nonatomic) BOOL showProgress;

- (void)hideAndEndAnimation;
- (void)beginCenterToSideAnimation;
- (void).cxx_destruct;
- (void)setVolume:(double)a0;
- (void)_dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateStatus;

@end
