@class UIScreenEdgePanGestureRecognizer, NSString, UINavigationController, AlertPrivacyInfo, NSMutableArray, WAMenuPopInteractiveTransition, UserAvatarInfo, UserPrivacyProtectInfo;
@protocol WAAuthorizeDelegate, IWAAuthorizePage;

@interface WAUserAuthorizeLogic : MMObject <WAPageSheetDelegate, WAAuthorizePageSheetDelegate, WAAuthorizeViewControllerDelegate, WAPopInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) id<IWAAuthorizePage> pageSheet;
@property (retain, nonatomic) UINavigationController *nextNav;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture;
@property (nonatomic) unsigned long long currentScopeIndex;
@property (retain, nonatomic) NSMutableArray *scopeInfoList;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *appIconUrl;
@property (retain, nonatomic) NSString *applyWording;
@property (retain, nonatomic) NSString *cancelWording;
@property (retain, nonatomic) NSString *allowWording;
@property (retain, nonatomic) UserAvatarInfo *avatarInfo;
@property (retain, nonatomic) AlertPrivacyInfo *privacyInfo;
@property (retain, nonatomic) NSMutableArray *riskInfo;
@property (weak, nonatomic) id<WAAuthorizeDelegate> delegate;
@property (retain, nonatomic) UserPrivacyProtectInfo *privacyProtectInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)currentScopeInfo;
- (BOOL)tryShowConfirmView:(id)a0 Error:(id *)a1 UIStyle:(unsigned long long)a2;
- (BOOL)handleShowHalfScreenConfirmViewWithAppID:(id)a0 Error:(id *)a1;
- (BOOL)handleShowFullScreenConfirmViewWithAppID:(id)a0 Error:(id *)a1;
- (void)showFullScreenNormalVC;
- (void)showFullScreenNicknameAndAvatarVC;
- (BOOL)shouldPassAuthorize:(id)a0;
- (BOOL)tryShowLocationConfirmView:(id)a0 Error:(id *)a1;
- (BOOL)canShowBackgroundLocationConfimView;
- (void)showLocationConfirmView:(id)a0;
- (BOOL)tryShowFuzzyLocationConfirmView:(id)a0 Error:(id *)a1;
- (void)showFuzzyLocationConfirmView:(id)a0;
- (BOOL)tryShowBluetoothConfirmView:(id)a0 Error:(id *)a1;
- (BOOL)canShowBackgroundBluetoothConfimView;
- (void)showBluetoothConfirmView:(id)a0;
- (BOOL)tryShowNicknameAndHeadConfirmView;
- (BOOL)tryShowCameraConfirmView;
- (BOOL)tryShowNormalConfirmView;
- (void)showPageSheet:(id)a0;
- (BOOL)fillBasicAuthorizeSheetInfo:(id)a0;
- (void)authorizeAccept:(id)a0;
- (void)showVoipAuthSuccessTipsWithCompleteAction:(id /* block */)a0;
- (void)authorizeReject:(id)a0;
- (void)dismissAndRecoverPopGesture;
- (BOOL)authorizeRequestWithAppID:(id)a0 permissionAppID:(id)a1 JsApiName:(id)a2 Scope:(id)a3 VersionType:(unsigned int)a4 ExternalInfo:(id)a5 PluginInfo:(id)a6;
- (BOOL)confirmRequestWithAppID:(id)a0 Scope:(id)a1 AllowAuth:(BOOL)a2 VersionType:(unsigned int)a3 AcceptProtocol:(BOOL)a4 ExternalInfo:(id)a5;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)onAuthorizeResponse:(id)a0;
- (void)onConfirmResponse:(id)a0;
- (void)pageSheet:(id)a0 needToPushViewController:(id)a1;
- (void)_pushNewPageViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onPopBackInteractiveTransitionBegin:(id)a0;
- (void).cxx_destruct;

@end
