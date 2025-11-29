@class UIView, NSString, WCFinderCreateCoordinator, WCFinderCreateLiveViewModel, MMLiveTaskId, UINavigationController, MMFinderLiveAgreementView, MMFinderLiveAgreementLogic;

@interface MMFinderLiveCreateLiveLogic : NSObject <MMFinderLiveStartLivePanelDelegate, MMFinderLivePreviewCameraViewControllerDelegate, WCFinderCreateCoordinatorDelegate, MMFinderLiveAgreementViewDelegate, ILinkEventExt>

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) WCFinderCreateCoordinator *createCoordinator;
@property (retain, nonatomic) MMFinderLiveAgreementLogic *agreementLogic;
@property (retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM;
@property (retain, nonatomic) NSString *prepareErrorString;
@property (retain, nonatomic) NSString *descriptionPromptWording;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL enableCustomStart;
@property (retain, nonatomic) UIView *activeRenderTargetView;
@property (retain, nonatomic) MMFinderLiveAgreementView *agreementView;
@property (nonatomic) BOOL isUsingCamera;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(unsigned int)a0 navigationController:(id)a1;
- (void)dealloc;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)clearAndExit;
- (void)startCreateLiveProcess;
- (void)onUserPrepared;
- (void)startCreateLivePrepare;
- (void)onCreateLiveVMPrepared;
- (void)prepareModelAndStartLive;
- (void)updateEnterLiveModeWithParamsModel:(id)a0;
- (void)realStartLiveWithParamsModel:(id)a0;
- (void)openCreateLiveViewWithTaskId:(id)a0;
- (void)openLiveViewController;
- (void)onStartLivePanelClickBeauty;
- (void)onStartLivePanelClickLeave;
- (void)onStartLivePanelClickStart:(BOOL)a0;
- (void)onStartLivePanelClickCamera;
- (void)onPreviewCameraVCClickLeave;
- (void)finderCreateAccountSuccess:(id)a0;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)onLiveAgreementChecked;
- (void)onLiveAgreementDismissed;
- (id)liveTask;
- (BOOL)isInLiveHomePageVC;
- (void).cxx_destruct;

@end
