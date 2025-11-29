@class IESLiveBattleDrawPropOperation, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveBattleDrawPropAnimationQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *drawPropQueue;
@property (retain, nonatomic) NSMutableArray *nodeArray;
@property (retain, nonatomic) IESLiveBattleDrawPropOperation *currentOperation;
@property (nonatomic) BOOL operationIsFinished;

- (id)initWithDIContext:(id)a0;
- (void)cancelAllOperation;
- (void)dequeueWithBattleDrawPropNode;
- (id)dequeueNodeAtIndex:(long long)a0;
- (void)startOperationWithNode:(id)a0;
- (void)enqueueWithBattleDrawPropNode:(id)a0;
- (void).cxx_destruct;

@end
