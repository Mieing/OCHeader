@interface TingMinimizeLaterTask : MinimizeTaskBaseLogicController

+ (BOOL)enableListenMinimizeTask;
+ (void)removeMinimizeTaskWithListenItem:(id)a0;
+ (void)addMinimizeTaskWithListenItem:(id)a0 scene:(long long)a1 fromView:(id)a2;
+ (id)minimizeTaskDataWithListenItem:(id)a0 scene:(long long)a1;
+ (void)updateTaskSnapshotWithListemItem:(id)a0 taskData:(id)a1;
+ (void)updateTaskSnapshotWithCoverImage:(id)a0 taskData:(id)a1;
+ (id)parseItemFromTaskData:(id)a0;
+ (id)reportParamFromListenItem:(id)a0;

- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (void)onMinimizedTaskItemExposed:(id)a0;
- (void)updateSnapshotIfNeed:(id)a0 preferredSize:(struct CGSize { double x0; double x1; })a1;

@end
