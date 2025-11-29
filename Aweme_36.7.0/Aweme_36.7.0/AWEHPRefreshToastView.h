@class DUXBaseLabel, DUXLoadingParticleView;

@interface AWEHPRefreshToastView : UIView

@property (retain, nonatomic) DUXLoadingParticleView *refreshLoadingView;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (nonatomic) BOOL isShowing;

- (void)showOnView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
