@class NSString;

@interface WAMinimizeTaskMgrProxy : NSObject <IWAMinimizeTaskMgrService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowMinimizeEntryReddot:(id)a0;
+ (void)markMinimizeEntryExp:(id)a0;
+ (void)markMinimizeEntryClick:(id)a0;
+ (void)markMinimizeEduExp:(id)a0;
+ (BOOL)canShowMinimizeOperation;
+ (BOOL)checkTaskMaxCountOrShowTipsBeforeAdd:(id)a0 pendingTaskContext:(id)a1;
+ (BOOL)checkMultiContentTaskMaxCount:(id)a0 taskBizKey:(id)a1 confirmBlock:(id /* block */)a2;
+ (id)getTask:(id)a0 TaskBizKey:(id)a1;
+ (BOOL)tryAddTaskAndMinimize:(id)a0 NotiDelegate:(id)a1;
+ (BOOL)updateTask:(id)a0 WithTaskData:(id)a1;
+ (BOOL)removeTask:(id)a0 TaskBizKey:(id)a1;
+ (BOOL)maximizeTask:(id)a0 TaskBizKey:(id)a1;
+ (BOOL)isTaskInForground:(id)a0 TaskBizKey:(id)a1;
+ (void)onMinimizeAnimationBegin:(id)a0 TaskBizKey:(id)a1 FromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 duration:(double)a4;
+ (void)onMinimizeAnimationEnd:(id)a0 TaskBizKey:(id)a1;
+ (void)performMinimizeAnimation:(id)a0 TaskBizKey:(id)a1;
+ (void)beginPopBackGesture:(id)a0 TaskBizKey:(id)a1;
+ (void)performMinimizeAnimation:(id)a0 TaskBizKey:(id)a1 taskStateType:(unsigned int)a2;
+ (void)onMinimizeAnimationBegin:(id)a0 TaskBizKey:(id)a1 TaskStateType:(unsigned int)a2 FromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 duration:(double)a5;
+ (void)onMinimizeAnimationEnd:(id)a0 TaskBizKey:(id)a1 TaskStateType:(unsigned int)a2;
+ (BOOL)updatePopBackGesture:(id)a0 TaskBizKey:(id)a1 Progress:(double)a2 TouchPoint:(struct CGPoint { double x0; double x1; })a3 ShouldCancel:(BOOL *)a4;
+ (void)endPopBackGesture:(id)a0 taskBizKey:(id)a1 isComplete:(BOOL)a2 pendingTaskContext:(id)a3;
+ (id)getMinimizationTransitionDelegate;
+ (BOOL)hasTask:(id)a0 TaskBizKey:(id)a1 taskStateType:(unsigned int)a2;
+ (BOOL)updateTaskSnapshot:(id)a0 WithTaskData:(id)a1;
+ (id)taskSnapShotImageWithTaskData:(id)a0;
+ (BOOL)hasOutterContainerTask;
+ (void)addMinimizeTaskAnimationForActionSheetWithTaskData:(id)a0 animationViewImage:(id)a1 fromViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;


@end
