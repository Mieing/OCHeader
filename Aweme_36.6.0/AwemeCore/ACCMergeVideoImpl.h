@class NSString, AWEPublishFlowModel, AWEPublishMergeStage, AWEVideoPublishViewModel, ACCInfiniMergeImpl;
@protocol ACCSequenceEditServiceProtocol;

@interface ACCMergeVideoImpl : NSObject <AWEPublishRunnableStageObserver, ACCMergeVideoHelperProtocol>

@property (retain, nonatomic) AWEVideoPublishViewModel *workspace;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) AWEPublishMergeStage *mergeStage;
@property (retain, nonatomic) ACCInfiniMergeImpl *infiniMerge;
@property (copy, nonatomic) id /* block */ progressCallback;
@property (copy, nonatomic) id /* block */ completionCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)useSequenceEditService:(id)a0;
- (void)fetchAllWithWorkspace:(id)a0 onProgress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchVideoWithIndex:(long long)a0 workspace:(id)a1 onProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id)flowModelWithPublishModel:(id)a0;
- (id)buildMergeVideoStageWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
