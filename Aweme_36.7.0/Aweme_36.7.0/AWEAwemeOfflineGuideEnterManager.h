@class NSString, AWEBinding, DUXBasicSheet;

@interface AWEAwemeOfflineGuideEnterManager : NSObject <DUXSheetDelegate>

@property (retain, nonatomic) AWEBinding *cachesAlreadyBinding;
@property (retain, nonatomic) AWEBinding *noNetworkBinding;
@property (nonatomic) long long lastOpenScene;
@property (nonatomic) long long currentGuideType;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) DUXBasicSheet *basicSheet;
@property (nonatomic) long long lastShowTimeStamp;
@property (nonatomic) BOOL networkAlreadyFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidClickCloseButton:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (BOOL)checkLeftSpaceEnough;
- (void)p_addKVO;
- (void)showOfflinePanelWithScene:(long long)a0;
- (void)didClickEnter;
- (void)didClickRejectUse;
- (void)didClickOpen;
- (void)didClickRejectOpen;
- (void)loginUserIdInOffline;
- (BOOL)ensureCanShowModeOpenPanel;
- (void)showOfflineModeOpenInfoPanel;
- (BOOL)ensureCanShowEntrancePanel;
- (void)showOfflineEntranceInfoPanel;
- (void)trackRevisitEventWithType:(long long)a0;
- (void)trackAlterEventWithType:(long long)a0 Scene:(long long)a1 DismissType:(long long)a2;
- (void)showTopNotification;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate;

@end
