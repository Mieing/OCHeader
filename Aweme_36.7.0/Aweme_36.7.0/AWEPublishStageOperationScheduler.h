@class NSMutableDictionary, NSOperationQueue, AWEPublishBaseTask, NSObject;
@protocol OS_dispatch_queue;

@interface AWEPublishStageOperationScheduler : NSObject

@property (retain, nonatomic) NSOperationQueue *opQueue;
@property (retain, nonatomic) NSMutableDictionary *stageOpMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) AWEPublishBaseTask *host;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (BOOL)containsOperation:(long long)a0 stageIndex:(long long)a1;
- (id)firstExecutingOperaion;
- (id)getKeyWithType:(long long)a0 stageIndex:(long long)a1;
- (id)getKeyWithOperation:(id)a0;
- (void)p_observeOp:(id)a0;
- (void).cxx_destruct;
- (void)cancelAllOperations;
- (void)addOperation:(id)a0;
- (id)init;
- (void)dealloc;

@end
