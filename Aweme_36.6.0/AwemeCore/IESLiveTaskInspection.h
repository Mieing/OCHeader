@class NSString, IESLiveCommonTaskQueue, IESLiveTaskScheduleMonitor;

@interface IESLiveTaskInspection : NSObject <IESLiveSystemResourceChanged, IESLiveCommonTaskInspection, IESLiveBusinessSceneObserver>

@property (retain, nonatomic) IESLiveTaskScheduleMonitor *monitor;
@property long long cpuLevel;
@property long long gpuLevel;
@property long long netLevel;
@property int memoryLevel;
@property (retain, nonatomic) IESLiveCommonTaskQueue *sceneTasks;
@property (retain, nonatomic) IESLiveCommonTaskQueue *cpuTasks;
@property (retain, nonatomic) IESLiveCommonTaskQueue *gpuTasks;
@property (retain, nonatomic) IESLiveCommonTaskQueue *netTasks;
@property (retain, nonatomic) IESLiveCommonTaskQueue *memoryTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ organizer;
@property (weak, nonatomic) IESLiveCommonTaskQueue *taskQueue;

+ (void)_aweLazyRegisterLoad;
+ (id)shared;

- (void)enterLiveRoom;
- (void)exitLiveRoom;
- (void)sceneDidUpdate:(unsigned long long)a0 newScene:(unsigned long long)a1;
- (BOOL)allowInvokeTaskDirectly:(id)a0;
- (void)systemResourceLevelChanged:(struct IESLiveSystemResourceLevel { long long x0; union value { long long x0; long long x1; long long x2; int x3; } x1; })a0;
- (void)slideLiveRoom;
- (void)cancelAllTasksAfterLeaveScope:(unsigned long long)a0;
- (BOOL)removeTask:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (unsigned long long)scene;

@end
