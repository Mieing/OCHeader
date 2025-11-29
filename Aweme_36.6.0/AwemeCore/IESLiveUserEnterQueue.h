@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveUserEnterQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *array;
@property (copy, nonatomic) id /* block */ dequeueNodeCallBack;

- (id)front;
- (BOOL)updateCommonNotifyEnterNode:(id)a0;
- (void)replaceNode:(id)a0 withCondition:(id /* block */)a1;
- (BOOL)aggregateSuccessfullyWithCommonNotifyEnterNode:(id)a0;
- (unsigned long long)countOfCalculateThresholdObjects;
- (void)dequeueInPriorityOrder;
- (void)replaceFront:(id)a0;
- (void)removeNodeWithCondition:(id /* block */)a0;
- (void)removeLastNodeWithCondition:(id /* block */)a0;
- (id)popNodeWithCondition:(id /* block */)a0;
- (BOOL)contains:(id /* block */)a0;
- (void)enqueue:(id)a0;
- (id)initWithLabel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)clear;
- (id)allNodes;
- (void)replaceNodeAtIndex:(int)a0 withNode:(id)a1;
- (void)dequeue;
- (unsigned long long)count;
- (id)popNode;
- (void)pushNode:(id)a0;

@end
