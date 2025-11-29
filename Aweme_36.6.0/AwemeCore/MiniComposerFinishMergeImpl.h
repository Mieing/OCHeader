@class ACCBatchMergeTask, NSString, AWEPublishFlowModel, AWEPublishInfiniMergeStage, ACCRepositoryWorkspace;
@protocol ACCSequenceEditServiceProtocol;

@interface MiniComposerFinishMergeImpl : NSObject <AWEPublishRunnableStageObserver>

@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) AWEPublishInfiniMergeStage *infiniMergeStage;
@property (retain, nonatomic) ACCBatchMergeTask *batchMergeTask;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) ACCRepositoryWorkspace *workspace;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exportAllItems:(id /* block */)a0;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)flowModelWithPublishModel:(id)a0;
- (void)p_callbackWithItems:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)cancel;

@end
