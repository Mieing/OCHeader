@class NSString, AWEPlayAiToTextPanelManager;

@interface AWEPlayInteractionAiTextPanelController : AWEPlayInteractionBaseController <AWEPlayAiToTextPanelDelegate, AWEPlayInteractionAiTextPanelControllerProtocol>

@property (retain, nonatomic) AWEPlayAiToTextPanelManager *aiToTextPanelManager;
@property (nonatomic) BOOL aiTextPanelshowed;
@property (nonatomic) BOOL isAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowed;
- (BOOL)shouldAITextEntranceInLongPressPanelWithModel:(id)a0 referString:(id)a1;
- (void)openAiToTextPanelWithTabType:(long long)a0 defaultTab:(long long)a1;
- (void)onFeedTabChangedNotification:(id)a0;
- (void)onTabBarChangedNotification:(id)a0;
- (void)setPureModeForAITextPanel:(BOOL)a0;
- (void)showAITextPanelFromNotice:(id)a0;
- (void)showAiToTextPanel:(id)a0;
- (void)showAiToTextPanel:(id)a0 TabType:(long long)a1 defaultTab:(long long)a2;
- (void)showAiToTextPanel:(id)a0 withExtraDict:(id)a1;
- (void)aiToTextPanelWillDismiss:(id)a0;
- (void)aiToTextPanelDidDismiss:(id)a0;
- (void)aiToTextPanel:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)onXTabTabChangedNotification:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
