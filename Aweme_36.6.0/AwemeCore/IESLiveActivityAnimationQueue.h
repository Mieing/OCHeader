@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveActivityAnimationQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *nodesList;

- (void)enqueueWithNode:(id)a0;
- (void)dequeueWithCompletion:(id /* block */)a0;
- (void)deleteNodeWithMessageType:(long long)a0 completion:(id /* block */)a1;
- (void)deleteAllNode;
- (void)isEmptyWithCompletion:(id /* block */)a0;
- (void)mergeTopNodeWithCurrentNode:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
