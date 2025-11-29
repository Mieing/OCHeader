@class NSString, NSArray, AWEPublishFlowModel, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEPublishRunnableStageProtocol;

@interface AWEPublishStageNet : NSObject <AWEPublishRunnableStageObserver, AWEPublishStageNetProtocol>

@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (retain, nonatomic) id<AWEPublishRunnableStageProtocol> startNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *allNodes;
@property (readonly, nonatomic) NSArray *startNodes;
@property (readonly, nonatomic) id<AWEPublishRunnableStageProtocol> endNode;
@property (retain, nonatomic) AWEPublishFlowModel *flowModel;

- (void)stage:(id)a0 didChangeStatus:(long long)a1;
- (void)finishNode:(id)a0;
- (void)addNodesIfNeeded:(id)a0;
- (void)addEndNodeDependenciesIfNeeded:(id)a0;
- (void)setCustomEndNode:(id)a0;
- (id /* block */)addStartNodes;
- (id /* block */)addEndNode;
- (BOOL)checkLoop:(id *)a0;
- (void).cxx_destruct;
- (void)handleEvent:(id)a0;
- (id)init;
- (void)start;
- (id /* block */)addNode;

@end
