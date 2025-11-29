@class NSString, IESLivePlaybackCornerToastConfig, UILabel, UIView;

@interface IESLivePlaybackCornerToastFragment : IESLivePlaybackComponent <IESLivePlaybackOrientationActions, IESLivePlaybackCustomAutoHideAnimService, IESLivePlaybackCornerToastAction, IESLivePlaybackComponentLifeCycle>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *customView;
@property (copy, nonatomic) id /* block */ hideComponentTask;
@property (nonatomic) BOOL needLimitWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } playFrame;
@property (retain, nonatomic) IESLivePlaybackCornerToastConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)landscapeViewsTransformToHidden:(BOOL)a0;
- (void)portraitViewsTransformToHidden:(BOOL)a0;
- (void)onOrientationTransitionEnd;
- (void)showText:(id)a0 delayTime:(double)a1;
- (void)showAttributeText:(id)a0;
- (void)showAttributeText:(id)a0 delayTime:(double)a1 cutWidth:(BOOL)a2;
- (void)showCustomSubview:(id)a0 delayTime:(double)a1;
- (void)showCustomSubview:(id)a0 delayTime:(double)a1 priority:(unsigned long long)a2;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)showCustomSubview:(id)a0;
- (void)showAndDelayToHideContainer:(double)a0;
- (void)showAndDelayToHideContainer;
- (void)showText:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupView;
- (void)hideImmediately;
- (BOOL)showingToast;

@end
