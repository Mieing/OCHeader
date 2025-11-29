@class AWEPublishInfiniUploadStage, NSArray, AWEPublishContainerStage, NSString, AWEVideoPublishViewModel, NSNumber;
@protocol AWEPublishEditServiceManagerProtocol, ACCSequenceEditServiceProtocol, ACCPublishMergeImageHelperProtocol;

@interface AWEPublishInfiniMergeStage : AWEPublishBaseMergeStage <AWEPublishRunnableStageObserver, AWEPublishContainerStageInfoProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (retain, nonatomic) NSArray *imageStageArray;
@property (retain, nonatomic) NSArray *videoStageArray;
@property (copy, nonatomic) NSArray *livePhotoFirstFrameArray;
@property (retain, nonatomic) AWEPublishContainerStage *videoContainerStage;
@property (retain, nonatomic) AWEPublishContainerStage *imageContainerStage;
@property (retain, nonatomic) AWEPublishContainerStage *containerStage;
@property (retain, nonatomic) id<AWEPublishEditServiceManagerProtocol> editServiceManager;
@property (retain, nonatomic) NSNumber *imageScoreStageFlag;
@property (retain, nonatomic) NSNumber *videoScoreStageFlag;
@property (nonatomic) BOOL isQuickSaveAlbum;
@property (nonatomic) BOOL mergeForPublish;
@property (retain, nonatomic) AWEPublishInfiniUploadStage *uploadStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)quickSaveAlbum;
- (BOOL)hasAppliedTemplate:(id)a0;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)buildMergeVideoStageWithIndex:(long long)a0;
- (id)stageArray;
- (void)buildStageArrayForSaveAlbum;
- (void)buildStageArray;
- (void)decideOutputContentTypewithCandidate:(long long)a0 atIndex:(long long)a1;
- (void)buildStageArrayForPublish;
- (BOOL)shouldMergeImageWaterMarkStageForSaveAlbumWithIndex:(long long)a0;
- (id)buildMergeWaterMarkImageStageWithIndex:(long long)a0;
- (id)buildMergeImageStageWithIndex:(long long)a0;
- (BOOL)shouldMergeWaterMarkStageForSaveAlbumWithIndex:(long long)a0;
- (id)buildMergeWaterMarkVideoStageWithIndex:(long long)a0;
- (id)buildMergeLivePhotoFirstFrameStageWithIndex:(long long)a0;
- (BOOL)shouldUseSequenceEditServiceWithIndex:(long long)a0;
- (void)reportImageQuality;
- (void)assembleMergeImageQuality;
- (BOOL)shouldUseSequenceEditService;
- (void)sendImagesMergeFinishNotication;
- (void)infiniMergePartFinished;
- (void)assembleMergeVideoAtIndex:(long long)a0;
- (void)sendVideoMergeFinishNotication;
- (void)assembleWatermarkVideoAtIndex:(long long)a0;
- (void)infiniMergeFinished;
- (void)triggerReportQuality;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (void)updateProgress;
- (void)run;

@end
