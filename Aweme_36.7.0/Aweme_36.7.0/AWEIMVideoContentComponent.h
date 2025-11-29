@class AWEIMMessageSendProgressViewModel, NSString, AWEIMMessageAttachmentUploadViewModel, AWEBinding, AWEIMMessageAttachmentDownloadViewModel;

@interface AWEIMVideoContentComponent : AWEIMFlexComponent <AWEIMMessageStateUIAction, AWEIMFoldMessageAssistanceButtonClickAction, AWEIMProcessEventDelegate, IESIMSendMsgFlowNotification, AWEIMMessageContentInterface>

@property (retain, nonatomic) NSString *posterFileID;
@property (retain, nonatomic) NSString *posterFilePath;
@property (retain, nonatomic) NSString *videoFileID;
@property (retain, nonatomic) NSString *videoFilePath;
@property (copy, nonatomic) NSString *videoCoverFileID;
@property (retain, nonatomic) NSString *videoCoverFilePath;
@property (retain, nonatomic) NSString *videoAssetIdentifier;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (retain, nonatomic) AWEIMMessageAttachmentUploadViewModel *uploadVM;
@property (retain, nonatomic) AWEIMMessageSendProgressViewModel *sendProgressViewModel;
@property (retain, nonatomic) AWEBinding *statusBinding;
@property (retain, nonatomic) AWEBinding *progressBinding;
@property (nonatomic) BOOL didRenderForCurrentComponent;
@property (nonatomic) BOOL didRefreshForCurrentComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (struct CGSize { double x0; double x1; })videoPosterSize:(id)a0;

- (void)addForwardMsgResourceFromComponent;
- (id)preloadTasksForMessage:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)configWithMessage:(id)a0;
- (void)completeCoverageTaskForMessage:(id)a0 error:(id)a1;
- (void)p_observeUploadVMWithNextFileID:(id)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (void)coverDidTapped;
- (BOOL)p_needResizeImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)p_didFinishSetImage:(id)a0;
- (void)p_resetProgressViewModelIfNeed;
- (void)flowNodeEndWithInput:(id)a0 output:(id)a1 duration:(long long)a2 error:(id)a3;
- (void)p_clipAndShowImage:(id)a0;
- (void)onProcessStageRuningWithStage:(id)a0 process:(id)a1;
- (void)onProcessStageDidStartWithStage:(id)a0 process:(id)a1;
- (void)didTapStateViewWithResendMessage;
- (BOOL)configUploadingState;
- (void)handleVideoStartResendNty:(id)a0;
- (void)p_setupFileIDs:(id)a0;
- (id)configLocalImage:(id)a0;
- (BOOL)configDownloadingStateLocalImage:(id)a0;
- (id)p_reduceResolutionLocalImageWithAbsolutePath:(id)a0;
- (void)refreshVideoContentIfNeed:(id)a0 process:(id)a1;
- (void).cxx_destruct;
- (id)displayMessage;

@end
