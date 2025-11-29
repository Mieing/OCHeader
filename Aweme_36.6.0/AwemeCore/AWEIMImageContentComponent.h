@class AWEIMMessageSendProgressViewModel, AWEIMEncryptedMessageViewModel, NSString, AWEIMComponentManager;

@interface AWEIMImageContentComponent : AWEIMFlexComponent <AWEIMImageContentInterface, AWEIMFoldMessageAssistanceButtonClickAction, AWEIMProcessEventDelegate, AWEIMComponentManagerDependency, AWEIMComponentContainer, IESIMSendMsgFlowNotification, AWEIMMessageContentInterface>

@property (nonatomic) long long vmState;
@property (nonatomic) long long cellUIMode;
@property (nonatomic) BOOL isPreloadingLivePhoto;
@property (retain, nonatomic) AWEIMMessageSendProgressViewModel *sendProgressViewModel;
@property (readonly, weak, nonatomic) AWEIMEncryptedMessageViewModel *specializedViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)addForwardMsgResourceFromComponent;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)trackOpenPlatformEvent:(id)a0;
- (void)trackWithEventName:(id)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (void)p_bindToVM;
- (BOOL)p_needResizeImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)flowNodeEndWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)p_didTapDownloadAction;
- (void)didTapCoverAction;
- (void)p_didFinishSetImage:(id)a0;
- (id)contentMD5;
- (void)enterExchangeMessageDetailVC;
- (void)p_resetProgressViewModelIfNeed;
- (void)configMessage;
- (void)trackwillDisplayCellForOpenPlatform;
- (id)formatPlugin;
- (void)trackCellClickForOpenPlatform;
- (void)p_beginLoadProcessIfNeed;
- (long long)p_cellUIModeFromVMState:(long long)a0;
- (void)reloadImageFromVM;
- (struct CGSize { double x0; double x1; })p_sizeForReduceResolution;
- (void)p_clipAndShowImage:(id)a0;
- (void)p_preloadLivePhotoVideoIfNeeded:(id)a0;
- (void)p_clipAndShowImage:(id)a0 thenCache:(BOOL)a1;
- (BOOL)isImageUnavaliable;
- (id)p_clipedImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 corners:(unsigned long long)a2;
- (void)p_vmStateChangedFrom:(long long)a0 to:(long long)a1;
- (void)onProcessStageDidFinishWithStage:(id)a0 process:(id)a1;
- (void).cxx_destruct;
- (id)displayMessage;
- (id)displayImage;

@end
