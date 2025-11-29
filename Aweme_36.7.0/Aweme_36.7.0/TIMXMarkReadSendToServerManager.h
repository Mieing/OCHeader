@class NSString, YYMemoryCache, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXMarkReadSendToServerManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) YYMemoryCache *taskCache;
@property (retain, nonatomic) YYMemoryCache *resultCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportMarkReadQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeTaskWithId:(id)a0;
- (void)addResult:(id)a0 withId:(id)a1;
- (void)addResultMap:(id)a0 withId:(id)a1;
- (void)removeResultWithId:(id)a0;
- (void)addTask:(id)a0 withId:(id)a1;
- (void)runTaskWithTaskId:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
