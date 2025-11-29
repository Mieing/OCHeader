@class NSRecursiveLock, MMLiveTask, MMLiveTaskId, OrderedDictionary, NSMutableArray;

@interface MMLiveWevisionWidgetManageLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) OrderedDictionary *widgetDict;
@property (retain, nonatomic) NSRecursiveLock *widgetDictLock;
@property (retain, nonatomic) NSMutableArray *clearTaskList;
@property (retain, nonatomic) NSRecursiveLock *clearTaskListLock;

- (id)initWithTaskId:(id)a0;
- (void)initDefaultData;
- (void)addWevisionWidget:(id)a0;
- (void)insertWevisionWidgetToBack:(id)a0;
- (void)removeWevisionWidget:(id)a0;
- (void)removeWevisionWidgetWithId:(id)a0;
- (id)getWevisionWidgetList;
- (void)clear;
- (id)createRenderTaskForWidgetUseCache:(id)a0;
- (void)changeRenderTaskToMostPrior:(id)a0;
- (void)changeRenderTaskToLeastPrior:(id)a0;
- (void)increaseUpdatePriorForExistRenderTasksFromBase:(int)a0;
- (void).cxx_destruct;

@end
