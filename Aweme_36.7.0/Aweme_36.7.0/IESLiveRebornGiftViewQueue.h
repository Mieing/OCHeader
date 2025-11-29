@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveRebornGiftViewQueue : NSObject <IESLiveRebornGiftQueueProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *idToNode;
@property (retain, nonatomic) NSMutableArray *localArray;
@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSMutableArray *waitingNodes;
@property (nonatomic) BOOL enableCountDownClear;
@property (nonatomic) long long countDownDuration;
@property (nonatomic) BOOL isWorking;
@property (nonatomic) BOOL enableAggregateBigGiftTray;
@property (nonatomic) long long maxLimitCount;
@property (nonatomic) BOOL enableQueueOptimize;
@property (nonatomic) BOOL trayGroupModeServerControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_removeNode:(id)a0;
- (void)enqueueWithNode:(id)a0;
- (void)getGiftQueueTaskCountWithBlock:(id /* block */)a0;
- (void)clearNodesForDecoderType:(unsigned long long)a0;
- (void)clearOther;
- (void)consumeNode:(id)a0;
- (void)displayTotal:(unsigned long long)a0 dropBlock:(id /* block */)a1 withCompletion:(id /* block */)a2;
- (void)enqueueWithNode_fixComboBug:(id)a0;
- (id)queueForNode:(id)a0;
- (void)hangOutNode:(id)a0;
- (long long)compareNode:(id)a0 withOriginNode:(id)a1;
- (long long)compareNodeType:(unsigned long long)a0 withOriginNodeType:(unsigned long long)a1;
- (void)p_enqueueWithNode_fixComboBug:(id)a0;
- (void)p_enqueueSendBySelfLogicWithNode:(id)a0 currentNode:(id)a1 key:(id)a2;
- (void)p_enqueueSendByOtherLogicWithNode:(id)a0 currentNode:(id)a1 key:(id)a2;
- (void)p_insertNodeLogicWithNode:(id)a0 key:(id)a1;
- (void)p_updatePostEffectIfNeedWithNode:(id)a0 currentNode:(id)a1 currentEffect:(id)a2;
- (void)insertGiftNode:(id)a0;
- (void)clearIdToNodeIfNeed;
- (BOOL)checkCurrentNodeIsSupportAggregateWithNode:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (id)nodeAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)deleteNode:(id)a0;

@end
