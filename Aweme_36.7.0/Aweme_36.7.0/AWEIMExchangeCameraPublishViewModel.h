@class AWEIMMessageConversation, NSString, AWEIMMessage, UIImage, AWEIMExchangeCameraTraceViewModel, NSArray;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentContextService, AFDMCEditService, AFDMomentCameraService, AFDMomentCameraPublishService, AWEIMExchangeMessageProtocol;

@interface AWEIMExchangeCameraPublishViewModel : AFDMomentCameraBaseViewModel <AFDMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL shouldShowPublishButton;
@property (nonatomic) BOOL shouldShowSendAnimation;
@property (nonatomic) BOOL shouldHideButtonWhenTextPanning;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL publishWithOutSelf;
@property (nonatomic) BOOL isRandonResult;
@property (weak, nonatomic) AWEIMExchangeCameraTraceViewModel *traceViewModel;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPublishService> publishService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL isQuoteRequestMessage;
@property (nonatomic) long long followBatchID;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) long long quoteServerMessageId;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *entrance;
@property (retain, nonatomic) UIImage *videoCoverImage;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMMessage<AWEIMExchangeMessageProtocol> *quoteExchangeMessage;
@property (copy, nonatomic) NSArray *selectedShareList;
@property (copy, nonatomic) id /* block */ shareToMultiPersonReplacePublishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)publishImage;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)didTapPublishButton;
- (BOOL)isImagePublishPath;
- (id)p_coverImageWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (void)didShareWithSelectSharePanel:(id)a0 needReport:(BOOL)a1;
- (void)p_setTraceTimeDiff;
- (id)imagePublishNtyDict:(BOOL)a0;
- (void)p_setTraceEnterMethod;
- (id)videoPublishNtyDictWithCoverImage:(id)a0 path:(id)a1 forceRequest:(BOOL)a2;
- (void)p_copyAvoidDeleteWhenSendingWithPath:(id)a0 complete:(id /* block */)a1;
- (id)p_getUploadMethod;
- (unsigned long long)p_getPublishType;
- (void)didShareWithSelectSharePanel:(id)a0;
- (id)p_saveImageToPath:(id)a0;
- (void).cxx_destruct;
- (id)originalImage;
- (void)publish:(id)a0;

@end
