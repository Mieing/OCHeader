@class MMUIViewController, NSString, UIScreenEdgePanGestureRecognizer, WAPlateAuthorizePageSheet, WAPlateManageViewController, WAReportPlateManageActionItem, WAMenuPopInteractiveTransition, WAPlateAuthorizeSheetInfo;

@interface WAJSContextPlugin_PlateManager : WAJSContextPluginBase <PBMessageObserverDelegate, WAPlateAuthorizePageSheetDelegate, WAPlateManageViewControllerDelegate, UIViewControllerTransitioningDelegate, WAPopInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) NSString *appid;
@property (weak, nonatomic) MMUIViewController *rootVC;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) WAPlateAuthorizePageSheet *platePageSheet;
@property (retain, nonatomic) WAPlateManageViewController *plateManageVC;
@property (retain, nonatomic) WAReportPlateManageActionItem *reportAction;
@property (nonatomic) unsigned long long selectedIdx;
@property (retain, nonatomic) WAPlateAuthorizeSheetInfo *sheetInfo;
@property (nonatomic) BOOL pageSheetDidShow;
@property (nonatomic) BOOL managerVCDidShow;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)destroyPlatePageSheet;
- (void)destroyPlateManageVC;
- (void)getPlateWithCompelteion:(id /* block */)a0 rootVC:(id)a1 appid:(id)a2;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)issueGetPlateRequestWithScene:(int)a0;
- (void)issueReportRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetUserPlateInfo:(id)a0;
- (void)handleReportUserPlateInfo:(id)a0;
- (void)showPageSheet;
- (void)endWithSuccessResult:(id)a0;
- (void)endWithErrorCode:(int)a0 msg:(id)a1;
- (void)showManageVC;
- (void)onWAPlateManageViewControllerDismiss:(id)a0;
- (void)onWAPlateManageViewControllerGetErrCode:(int)a0 errorMsg:(id)a1;
- (void)authorizeAccept:(id)a0;
- (void)authorizeReject:(id)a0;
- (void)pageSheet:(id)a0 needToPushViewController:(id)a1;
- (void)authorizeManagePlate:(id)a0;
- (void)_pushNewPageViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)recoverInteractivePop;
- (void)removeInteractivePop;
- (void)showToastWithText:(id)a0;
- (id)parseErrCode:(int)a0 ErrMsg:(id)a1;
- (void).cxx_destruct;

@end
