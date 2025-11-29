@class NSString, UIViewController, AWEDouyinSelectAINoteViewController;

@interface AWEPlayInteractionAINotePanelController : AWEPlayInteractionNewBaseController <AWEDouyinSelectAINoteContainerDelegate, AWEPlayInteractionAINotePanelControllerProtocol>

@property (retain, nonatomic) AWEDouyinSelectAINoteViewController *aiNoteRootViewController;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) BOOL parentViewControllerDisableFullscreenPopTransition;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showAINotePanel;

- (void)setShouldPreventPlay:(BOOL)a0;
- (id)getVideoScreenShot;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)isPanelShowed;
- (id)currentInfoForSubUnits;
- (id)currentInfoForUnitWithIdentifier:(id)a0;
- (id)currentInfoForUnitWithClassName:(id)a0;
- (void)shrinkVideoPlayToTargetHeight:(double)a0 animated:(BOOL)a1;
- (void)changeVideoPlayState;
- (void)closeAINotePanelWithAnimated:(BOOL)a0;
- (void)openAINotePanel:(id)a0 WithLogExtraDict:(id)a1;
- (void)onAWEAINoteButtonClicked:(id)a0;
- (void)realOpenAINotePanel:(id)a0 WithLogExtraDict:(id)a1;
- (void)magnifyVideoPlayerWithAnimated:(BOOL)a0;
- (void)didServiceDidDismiss;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)addObserver;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)playVideo;
- (void)pauseVideo;

@end
