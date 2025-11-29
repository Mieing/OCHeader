@class NSArray;

@interface AWEPublishMultiSplitableTask : AWEPublishCommonTask

@property (retain, nonatomic) NSArray *multiSplitFlowModels;
@property (retain, nonatomic) NSArray *multiSplitSubTasks;
@property (nonatomic) BOOL isMultiSplitPublishTaskRuntimeStableFlag;

- (BOOL)isMultiSplitPublishTask;
- (id)fetchAllAweme;
- (id)fetchAllMultiSplitSubTasks;
- (BOOL)isAllMultiSplitSubTasksSucceed;
- (id)fetchAllAwemeResponses;
- (id)filterMultiSplitSubTasksWithStatus:(unsigned long long)a0;
- (id)multiSplitSubTaskWithUUID:(id)a0;
- (void)didEnqueueWithInfo:(id)a0;
- (id)multiSplitSubPublishFlowModelWithProjectUUID:(id)a0;
- (id)provideOriginFlowModel;
- (void)makeSplitSubTasksToProgress:(double)a0;
- (void)makeSplitSubTasksToStatus:(unsigned long long)a0 error:(id)a1;
- (void)setupMultiSplitFlowModelsIfNeed;
- (void)setupMultiSplitPublishSubTasksIfNeed;
- (void)updateSubTaskCoverIfNeed;
- (void).cxx_destruct;
- (void)execute;

@end
