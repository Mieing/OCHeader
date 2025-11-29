@class IESLivePlaybackGradientView, NSString, UIView;
@protocol IESLivePlaybackPanelConfigProtocol;

@interface IESLivePlaybackPanelFragment : IESLivePlaybackComponent <IESLivePlaybackPanelService, UIGestureRecognizerDelegate, IESLivePlaybackOrientationActions>

@property (retain, nonatomic) UIView *backgroundReactiveView;
@property (retain, nonatomic) IESLivePlaybackGradientView *gradientView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) id<IESLivePlaybackPanelConfigProtocol> config;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) double resetScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)onOrientationTransitionBegin:(long long)a0;
- (Class)configClass;
- (void)dismissPanelAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showWithConfig:(id)a0;
- (void)showPanelForContentView:(id)a0 withConfig:(id)a1;
- (void)dismissPanelAnimated:(BOOL)a0 updatePlayerSize:(BOOL)a1 completion:(id /* block */)a2;
- (void)showAnotherPanelForContentView:(id)a0 withConfig:(id)a1;
- (void)setupBackgroundViewWithConfig:(id)a0;
- (void)setupSubviewsForContentView:(id)a0 withConfig:(id)a1;
- (void)updateForHidden:(BOOL)a0 withConfig:(id)a1;
- (void)updatePlayerSizeForHidden:(BOOL)a0 withConfig:(id)a1;
- (void)updateContainerViewForHidden:(BOOL)a0 withConfig:(id)a1;
- (void)dismissForTouchBlankArea;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
