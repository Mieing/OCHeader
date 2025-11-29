@class NSString, AWEIMUITaskQueue;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMTableTransactionComponent : AWEIMComponentBase <IESIMMessageListUITaskService, AWEIMMessageListComponent>

@property (retain, nonatomic) AWEIMUITaskQueue *uiTaskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)enqueueUITask:(id)a0;
- (void)msg_enqueueUITask:(id)a0;
- (void)msg_enqueueReloadDataTaskFor:(id)a0;
- (void)msg_enqueueCellHeightUpdateTaskFor:(id)a0;
- (void)msg_enqueueCellHeightUpdateTaskFor:(id)a0 completion:(id /* block */)a1;
- (void)msg_enqueueCellHeightUpdateTaskFor:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (void)msg_cancelAllTasksOfMergeID:(id)a0;
- (BOOL)msg_containsTaskOfBizID:(id)a0;
- (id)mergeIDForReloadDataOnTableView:(id)a0;
- (void)enqueueCellHeightUpdateTaskFor:(id)a0 completion:(id /* block */)a1;
- (void)enqueueCellHeightUpdateTaskFor:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (id)mergIDForUpdateCellHeightOnTableView:(id)a0;
- (void)cancelAllTasksOfMergeID:(id)a0;
- (BOOL)containsTaskOfBizID:(id)a0;
- (void)enqueueReloadDataTaskFor:(id)a0;
- (void)enqueueCellHeightUpdateTaskFor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
