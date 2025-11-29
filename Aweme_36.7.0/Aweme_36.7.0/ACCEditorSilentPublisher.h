@class NSString, ACCEditorComponent, AWEVideoPublishViewModel, ACCEditViewControllerInputData, AWEPublishMergeStage;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider, IESServiceRegister, ACCEditServiceProtocol;

@interface ACCEditorSilentPublisher : NSObject <AWEPublishStageDelegate>

@property (retain, nonatomic) ACCEditViewControllerInputData *inputData;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCEditorComponent *editorAssemblerComponent;
@property (retain, nonatomic) AWEPublishMergeStage *silentMergeStage;
@property (copy, nonatomic) id /* block */ silentMergeUpdatePublishViewModel;
@property (copy, nonatomic) id /* block */ silentMergeCompleted;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> editServiceContainer;
@property (nonatomic) BOOL showLoading;
@property (nonatomic) BOOL silentMergeNoPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_publishEnabled;

- (id)initWithRepository:(id)a0;
- (void)publishStage:(id)a0 didChangeStatus:(long long)a1 userInfo:(id)a2;
- (void)silentPublishQuickStory;
- (void)silentPublishNormalVideo;
- (void)prepareEditPageDataForSilentPublishOnCompletion:(id /* block */)a0;
- (void)doPublishWithIsQuickStory:(BOOL)a0;
- (void)doPublishWithIsQuickStory:(BOOL)a0 withEnableTitle:(BOOL)a1;
- (void)doPrePublishIfNeededWithUploadParameters:(id)a0;
- (void)configInputDataForServiceContainer:(id)a0;
- (BOOL)_setupEditSession;
- (id)businessServiceContainer;
- (void)pollTrackImportQuality;
- (void)silentPublish:(id)a0 quickStory:(BOOL)a1;
- (void)trackWithPublishModel:(id)a0 isCanceled:(BOOL)a1;
- (void)setupEditSessionIfNeeded;
- (id)convertSilentMergeVideoLocalPath:(id)a0;
- (id)copySilentMergeVideoWithSrcPath:(id)a0 dstPath:(id)a1;
- (void)silentMergeNormalVideoWithCompleted:(id /* block */)a0;
- (void)silentMergeUpdatePublishViewModel:(id /* block */)a0;
- (void).cxx_destruct;

@end
