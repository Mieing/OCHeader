@class NSString;

@interface MMLiteAppMinimizeMgr : MMUserService <MMServiceProtocol, IMinimizeTaskDelegateInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictFromString:(id)a0;
+ (struct TaskDataParams { id x0; id x1; id x2; id x3; id x4; id x5; id x6; })parseTaskDataParams:(id)a0;
+ (id)uniqueKeyWithBizName:(id)a0 withType:(id)a1 withAppId:(id)a2 withPage:(id)a3 withQuery:(id)a4 orKey:(id)a5;
+ (id)taskContextDataWithAppId:(id)a0 withPage:(id)a1 withQuery:(id)a2 withExtraData:(id)a3;
+ (long long)getLiteAppKeepAliveGroup:(unsigned int)a0;
+ (id)parseTaskContextData:(id)a0;
+ (id)genMinimizeTaskData:(BOOL)a0 taskDataParams:(struct TaskDataParams { id x0; id x1; id x2; id x3; id x4; id x5; id x6; })a1 bizName:(id)a2 bizKey:(id)a3 appId:(id)a4 page:(id)a5 query:(id)a6;
+ (id)updateMinimizeTaskData:(BOOL)a0 taskDataParams:(struct TaskDataParams { id x0; id x1; id x2; id x3; id x4; id x5; id x6; })a1 bizName:(id)a2 bizKey:(id)a3 appId:(id)a4 page:(id)a5 query:(id)a6;
+ (id)getTaskBizName:(id)a0;
+ (void)installMMLiteAppViewControllerTransition:(id)a0 taskData:(id)a1;
+ (void)uninstallMMLiteAppViewControllerTransition:(id)a0;
+ (void)updateTaskSnapshot:(id)a0 taskData:(id)a1;
+ (void)publishAddTaskEvent:(id)a0 type:(id)a1 reason:(id)a2;

- (void)addTask:(id)a0 appUuid:(unsigned int)a1 page:(id)a2 query:(id)a3 params:(id)a4;
- (void)updateTask:(id)a0 appUuid:(unsigned int)a1 page:(id)a2 query:(id)a3 params:(id)a4;
- (void)removeTask:(id)a0 appUuid:(unsigned int)a1 page:(id)a2 query:(id)a3 params:(id)a4;
- (void)prepareTask:(id)a0 appUuid:(unsigned int)a1 page:(id)a2 query:(id)a3 params:(id)a4;
- (id)getTaskSwitch;
- (id)getTaskState:(id)a0 appUuid:(unsigned int)a1 page:(id)a2 query:(id)a3 key:(id)a4;
- (void)transitionToTask:(id)a0 taskData:(id)a1;
- (void)tryAddTaskAndMinimize:(id)a0 NotiDelegate:(id)a1 controller:(id)a2;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;

@end
