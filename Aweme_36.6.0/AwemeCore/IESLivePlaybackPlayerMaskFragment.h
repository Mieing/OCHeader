@class NSString, HTSLiveAmazingBackgroundView, UIView;

@interface IESLivePlaybackPlayerMaskFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackCustomAutoHideAnimService>

@property (retain, nonatomic) HTSLiveAmazingBackgroundView *topMaskView;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *bottomMaskView;
@property (retain, nonatomic) UIView *playerMaskView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentWillAppear;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)onVideoFrameChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)remakeConstraintsWithOrientation:(BOOL)a0;
- (void)setupTopGradientLayer:(BOOL)a0;
- (void)setupBottomGradientLayer:(BOOL)a0;
- (void)maskAlphaChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)setup;

@end
