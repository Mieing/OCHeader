@class AWEPublishIMVideoTask, NSString, AWEPublicIMPhotoAblumTask, AWEIMComponentConfig, ACCAnimatedButton;
@protocol ACCEditViewStateProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface AWEIMEditorFinishedComponent : ACCFeatureComponent <ACCEditViewHolderComponentProtocol, ACCStickerServiceSubscriber>

@property (retain, nonatomic) AWEPublishIMVideoTask *imVideoTask;
@property (retain, nonatomic) AWEPublicIMPhotoAblumTask *imPhotoTask;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) ACCAnimatedButton *finishButton;
@property (retain, nonatomic) AWEIMComponentConfig *featureConfig;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) id<ACCEditViewStateProtocol> viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initialViewStateWithContext:(id)a0;

- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)stickerServiceConfigOtherViewAlpha:(double)a0;
- (void)bindViewState;
- (void)onFinishButtonDidClick;
- (void)setupSimplifyFinishButton;
- (void)preparePublish;
- (void)enqueuePublishTask;
- (BOOL)p_isPhotoSourceAndModernCamera;
- (void)executeTaskV2;
- (void)getProcessedPreviewImageWithCompletion:(id /* block */)a0;
- (void)executeTaskV2_photo;
- (id)getIMPhotoTask;
- (void).cxx_destruct;

@end
