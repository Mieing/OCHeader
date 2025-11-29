@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MMWebViewPlugin_AD : MMWebViewPluginBase <PBMessageObserverDelegate> {
    NSObject<OS_dispatch_queue> *_gcdQueue;
}

@property (retain, nonatomic) NSMutableDictionary *dicHost2Token;
@property (retain, nonatomic) NSMutableDictionary *dicEventID2Task;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isFetchingToken;

- (id)init;
- (void)addGetTokenTaskWithUrl:(id)a0 adUrl:(id)a1 posId:(id)a2 completion:(id /* block */)a3;
- (void)checkTaskQueue;
- (void)remoteGetAdTokenByTask:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)workthread_handleGetTokenResponse:(id)a0 eventId:(unsigned int)a1;
- (void)saveToken:(id)a0 expireTime:(unsigned long long)a1 forUrl:(id)a2;
- (id)getTokenByUrl:(id)a0;
- (id)getTokenKeyByUrl:(id)a0;
- (void).cxx_destruct;

@end
