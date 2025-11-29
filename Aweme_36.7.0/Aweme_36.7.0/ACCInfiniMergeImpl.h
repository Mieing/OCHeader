@class ACCBatchMergeTask, NSString, AWEPublishFlowModel, AWEVideoPublishViewModel, AWEPublishInfiniMergeStage;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCInfiniMergeImpl : NSObject <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) AWEVideoPublishViewModel *workspace;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (retain, nonatomic) AWEPublishInfiniMergeStage *infiniMergeStage;
@property (retain, nonatomic) ACCBatchMergeTask *batchMergeTask;
@property (copy, nonatomic) id /* block */ batchCompletionCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)useSequenceEditService:(id)a0;
- (void)fetchAllWithWorkspace:(id)a0 onProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)flowModelWithPublishModel:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
