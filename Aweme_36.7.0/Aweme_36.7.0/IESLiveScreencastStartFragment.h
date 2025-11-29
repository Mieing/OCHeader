@class NSString, UILabel, IESLiveModalDialog, IESLiveScreencastStartStore;
@protocol IESLiveScreencastSystemAwakenController;

@interface IESLiveScreencastStartFragment : IESLiveGuideComponent <IESLiveScreencastLiveModuleStartInterface, IESLiveGuideActions, IESLiveGuideStartLiveEvent>

@property (retain, nonatomic) id<IESLiveScreencastSystemAwakenController> screencastAwakenController;
@property (retain, nonatomic) IESLiveScreencastStartStore *store;
@property (copy, nonatomic) id /* block */ startExtensionSuccessfulHandler;
@property (retain, nonatomic) IESLiveModalDialog *broadcastDialog;
@property (retain, nonatomic) UILabel *screenshotTipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)screencastLiveEnable;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)willStartLive;
- (void)willCloseGuideViewController;
- (void)presentScreenshotStartWithRoom:(id)a0 startExtensionSuccessfulHandler:(id /* block */)a1;
- (void)beginStartLiveRequesting;
- (void)bindXLiveObserveActions;
- (void)hookModalTransitionStyleSetting;
- (void)dismissStartViewAndCalledSuccessfulHandlerIfNeed;
- (void)showScreencastLiveView;
- (void)presentSystemRecordPanelIfNeeded;
- (void)showStartAlertViewWithCompletion:(id /* block */)a0;
- (void)broadcastPickerViewDidClosed;
- (void)dismissScreencastLiveViewWithHandle:(id /* block */)a0;
- (void)showScreenshotTipsLabel:(unsigned long long)a0;
- (void)passEnterRoomMessage;
- (id)createScreenshotTipsLabel;
- (BOOL)setupSystemRecordLiveScene;
- (void).cxx_destruct;

@end
