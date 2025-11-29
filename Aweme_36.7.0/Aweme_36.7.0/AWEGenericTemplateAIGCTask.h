@class AWEGenericTemplateAIGCMergedRequestInfo, NSArray, AWEAIGCProcessResultModel, NSMutableSet, NSString, NSMutableArray, NSObject;
@protocol AWEAIGCAIAssetTaskProtocol, AWEGenericTemplateAIGCTaskDelegation, OS_dispatch_queue;

@interface AWEGenericTemplateAIGCTask : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSMutableSet *aigcCache;
@property (retain, nonatomic) NSMutableArray *aigcTasks;
@property (retain, nonatomic) NSMutableArray *aigcTrackModels;
@property (copy, nonatomic) NSArray *appliedModels;
@property (nonatomic) BOOL isMergedRequesting;
@property (retain, nonatomic) AWEAIGCProcessResultModel *resultModel;
@property (nonatomic) BOOL isAsync;
@property (retain, nonatomic) NSObject<AWEAIGCAIAssetTaskProtocol> *aiAssetTaskHelper;
@property (nonatomic) BOOL didShowAIAssetTextAnimating;
@property (retain, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSString *taskId;
@property (readonly, copy, nonatomic) NSString *templateId;
@property (readonly, copy, nonatomic) NSString *requestId;
@property (weak, nonatomic) id<AWEGenericTemplateAIGCTaskDelegation> delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *rwQueue;
@property (retain, nonatomic) AWEGenericTemplateAIGCMergedRequestInfo *currentMergedRequestInfo;
@property (retain, nonatomic) NSArray *currentResourceModelList;
@property (nonatomic) long long actualRequestResourceCount;

- (void)startLongConnectionAIAssetTask;
- (void)updateAIAssetNotEnoughUIWith:(BOOL)a0 consumeAssetAmount:(long long)a1;
- (id)retrieveCache:(id)a0;
- (void)addTrackModel:(id)a0;
- (void)removeAIGCTask:(id)a0;
- (void)addAIGCTask:(id)a0;
- (void)showTaskPanelIfNeededWithResponseModel:(id)a0 consumeAssetAmount:(long long)a1 pageType:(id)a2;
- (void)doAIAssetTaskIfNeededWithConsumeAssetAmount:(long long)a0 pageType:(id)a1;
- (id)fetchCache:(id)a0 ignoreSourcePath:(BOOL)a1;
- (void)renovateProcessedPathIfNeed:(id)a0;
- (void)didFinishCallbackWithResultList:(id)a0 mergedRequestInfo:(id)a1 toast:(id)a2 hitCache:(BOOL)a3 error:(id)a4;
- (void)requestAIGCWithResourceModelList:(id)a0 totalResourceModelList:(id)a1 toRequestResourceModels:(id)a2 cachedResourceModels:(id)a3 mergedRequestInfo:(id)a4 publishModel:(id)a5;
- (void)checkAIAssetWithPublishModel:(id)a0 completion:(id /* block */)a1;
- (void)beginAIGCCoreTracker:(id)a0;
- (id)finalResultsFromCache;
- (void)endAIGCCoreTracker:(id)a0 error:(id)a1 results:(id)a2;
- (id)initWithTemplateId:(id)a0 taskId:(id)a1 scene:(long long)a2 rwQueue:(id)a3;
- (void)resetTrackModels;
- (void)didCancelApply;
- (void)recoverAIGCInfo:(id)a0;
- (void)downloadAIGCResultsIfNeededWithSlotInfos:(id)a0 requestID:(id)a1 publishModel:(id)a2;
- (void)handleClickGainAIAssetButtonWithTaskType:(long long)a0;
- (void)requestAIGCIfNeededWithResourceModelList:(id)a0 mergedRequestInfo:(id)a1 publishModel:(id)a2 cacheCheckIgnoreSourcePath:(BOOL)a3;
- (BOOL)hasAigcCache;
- (void)transferAsync;
- (BOOL)hasContainsPath:(id)a0;
- (void).cxx_destruct;
- (void)addCache:(id)a0;
- (void)stopQuery;
- (void)dealloc;
- (void)cancelTask;

@end
