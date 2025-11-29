@class UIVisualEffectView, AWELongVideoXiguaGuidePlayNextVideoView;

@interface AWERVXiguaGuidePlayNextController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) AWELongVideoXiguaGuidePlayNextVideoView *xiguaPlayNextVideoView;
@property (retain, nonatomic) UIVisualEffectView *glassmorphismView;

- (void)setHide:(BOOL)a0;
- (void)bindEvent;
- (void)hiddenPlayDoneXiguaGuideView;
- (void)showPlayDoneXiguaGuideViewWithTitle:(id)a0 coverUrl:(id)a1 isForceGuide:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
