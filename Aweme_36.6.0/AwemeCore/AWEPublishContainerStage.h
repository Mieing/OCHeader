@class NSHashTable, NSString, NSRecursiveLock, AWEPublishFlowModel, NSError, NSArray, NSMutableArray, NSMapTable;
@protocol AWEPublishTaskContextProtocol;

@interface AWEPublishContainerStage : NSObject <AWEPublishContainerStageProtocol, AWEPublishRunnableStageObserver, AWEPublishStageProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *stages;
@property (retain, nonatomic) NSMapTable *stageProgressDict;
@property (retain, nonatomic) NSRecursiveLock *AWEPublishContainerStageLock;
@property (retain, nonatomic) NSMutableArray *depenencyArray;
@property (retain, nonatomic) NSHashTable *childArray;
@property (nonatomic) BOOL autoCalculateProgress;
@property (readonly, copy, nonatomic) id /* block */ add;
@property (readonly, copy, nonatomic) id /* block */ addObserver;
@property (nonatomic) double progress;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSString *stageType;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, weak, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (readonly, weak, nonatomic) id<AWEPublishTaskContextProtocol> task;

- (void)addDependencies:(id)a0;
- (void)bindToTask:(id)a0;
- (BOOL)isStageFinishedWithStatus:(long long)a0;
- (BOOL)isDependenciesFinished;
- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)stage:(id)a0 didUpdateProgress:(double)a1;
- (id /* block */)addDependencies;
- (id)stageArray;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (void)addObserver:(id)a0;
- (id)init;
- (void)run;
- (void)addDependency:(id)a0;
- (void)startNode;
- (void)addStage:(id)a0;

@end
