@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveEffectsDownloadQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *nodeArray;
@property (retain, nonatomic) NSMutableDictionary *nodeDict;

- (void)dequeueWithCompletion:(id /* block */)a0;
- (id)getTopNode;
- (long long)lastIndexOfPriority:(unsigned long long)a0;
- (void)enqueueWithNode:(id)a0 completion:(id /* block */)a1;
- (void)getAndRemoveNodeWithPriority:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)insertNode:(id)a0;

@end
