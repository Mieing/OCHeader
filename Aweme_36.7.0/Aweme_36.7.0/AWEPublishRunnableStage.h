@class NSRecursiveLock, NSString, NSArray, NSHashTable, AWEPublishFlowModel, NSMutableArray, NSError;

@interface AWEPublishRunnableStage : NSObject <AWEPublishRunnableStageProtocol>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSRecursiveLock *baseLock;
@property (retain, nonatomic) NSMutableArray *depenencyArray;
@property (retain, nonatomic) NSHashTable *childArray;
@property (nonatomic) BOOL ignoreFailure;
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

- (void)addDependencies:(id)a0;
- (void)bindToTask:(id)a0;
- (BOOL)isStageFinishedWithStatus:(long long)a0;
- (BOOL)isDependenciesFinished;
- (void)setupWithFlowModelIfNeeded;
- (void)updateFlowModelIfNeeded;
- (id /* block */)addDependencies;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)run;
- (void)addDependency:(id)a0;
- (void)startNode;

@end
