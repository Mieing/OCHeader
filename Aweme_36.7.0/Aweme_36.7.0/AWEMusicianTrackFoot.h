@class UIButton, DUXLoadingParticleView;

@interface AWEMusicianTrackFoot : UIView

@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ tapedAction;
@property (nonatomic) BOOL isLoadError;

- (void)lunaLoadMoreAction;
- (void)p_adjustBtn;
- (void)loadingShow:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
