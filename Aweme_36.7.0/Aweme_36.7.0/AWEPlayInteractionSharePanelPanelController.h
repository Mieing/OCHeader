@class NSString;

@interface AWEPlayInteractionSharePanelPanelController : AWEPlayInteractionNewBaseController <AWEPlayInteractionSharePanelPanelControllerProtocol>

@property (nonatomic) BOOL sharePanelShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)isPanelShowed;
- (void)onShareVCDismissedNotification:(id)a0;
- (void)sharePanelWillShow;
- (void)sharePanelDidDismiss;
- (BOOL)shouldResetSpeedControl;
- (void)sharePanelWillDismiss;
- (void)showSharePanel;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
