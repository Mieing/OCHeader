@class DUXBaseLabel, DUXLoadingParticleView;

@interface AWEDCRefreshToastView : UIView

@property (retain, nonatomic) DUXLoadingParticleView *refreshLoadingView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL disableTransform;
@property (nonatomic) double topOffset;

- (void)showOnView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
