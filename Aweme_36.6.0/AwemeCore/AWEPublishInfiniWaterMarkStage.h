@class NSArray, AWEPublishContainerStage, NSString, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, ACCPublishMergeImageHelperProtocol, AWEPublishEditServiceManagerProtocol, ACCEditServiceProtocol;

@interface AWEPublishInfiniWaterMarkStage : AWEPublishBaseStage <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *mergePublishViewModel;
@property (retain, nonatomic) AWEVideoPublishViewModel *originPublishViewModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) NSArray *imageStageArray;
@property (retain, nonatomic) NSArray *videoStageArray;
@property (retain, nonatomic) AWEPublishContainerStage *containerStage;
@property (retain, nonatomic) AWEPublishContainerStage *videoContainerStage;
@property (retain, nonatomic) AWEPublishContainerStage *imageContainerStage;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)initWithModel:(id)a0 editService:(id)a1;
- (void)buildStageArrayForSaveAlbum;
- (BOOL)shouldUseSequenceEditService;
- (BOOL)shouldAddImageWaterMarkForSaveAlbumWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)run;

@end
