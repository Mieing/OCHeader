@class AWEPublishInfiniReviewSlidesStage, AWEPublishUploadOtherStage, AWEPublishParallelStage, AWEPublishInfiniReviewImageStage, AWEVideoPublishViewModel, NSString;
@protocol ACCSequenceEditServiceProtocol;

@interface AWEPublishInfiniReviewStage : AWEPublishMultiSplitableHandleReviewStage <AWEPublishRunnableStageObserver, AWEPublishContainerStageInfoProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEPublishInfiniReviewImageStage *reviewImageStage;
@property (retain, nonatomic) AWEPublishUploadOtherStage *reviewVideoStage;
@property (retain, nonatomic) AWEPublishParallelStage *parallelStage;
@property (retain, nonatomic) AWEPublishInfiniReviewSlidesStage *reviewSlidesStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithFlowModelIfNeeded;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)stageArray;
- (void).cxx_destruct;
- (id)init;
- (void)run;

@end
