@class IESLivePlaybackStatusBarView, NSString, IESLivePlaybackStatusBarControl;

@interface IESLivePlaybackStatusBarFragment : IESLivePlaybackComponent <IESLivePlaybackAutoRotateAction, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) IESLivePlaybackStatusBarControl *statusBarControl;
@property (retain, nonatomic) IESLivePlaybackStatusBarView *statusBar;
@property (nonatomic) long long currentOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (void)updateStatusBar;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isLandscape;
- (void)createUI;

@end
