@class NSMutableArray, NSString, NSObject, WAWebSocketConfig;
@protocol WAWebSocketHandlerDelegate, OS_dispatch_queue;

@interface WAWebSocketHandler : NSObject <WAWebSocketTaskDelegate> {
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    NSMutableArray *_arrTask;
}

@property (weak, nonatomic) id<WAWebSocketHandlerDelegate> delegate;
@property (nonatomic) unsigned int workerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 workerQueue:(id)a2 context:(id)a3;
- (void)dealloc;
- (void)openWithCompatibleSingleConnection:(BOOL)a0 taskID:(id)a1 url:(id)a2 httpHeaders:(id)a3 isIgnoreCheckDomain:(BOOL)a4 subProtocols:(id)a5 context:(id)a6 completionHandler:(id /* block */)a7 openHandler:(id /* block */)a8 closeHandler:(id /* block */)a9 errorHandler:(id /* block */)a10 messageHandler:(id /* block */)a11;
- (void)closeWithCompatibleSingleConnection:(BOOL)a0 taskID:(id)a1 code:(long long)a2 reason:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendString:(id)a0 withCompatibleSingleConnection:(BOOL)a1 taskID:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendData:(id)a0 withCompatibleSingleConnection:(BOOL)a1 taskID:(id)a2 completionHandler:(id /* block */)a3;
- (void)closeAllTaskWithReason:(id)a0;
- (void)closeAllTaskAndReleaseImmediately;
- (BOOL)isReachMaxConcurrentCount;
- (unsigned long long)getTaskCount;
- (id)getCompatibleSingleConnectionTask;
- (id)getTaskWithTaskID:(id)a0;
- (id)getAllTask;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void)removeAllTask;
- (id)genNewSocketTaskID;
- (void)openSocketWithCompatibleSingleConnection:(BOOL)a0 taskID:(id)a1 url:(id)a2 httpHeaders:(id)a3 subProtocols:(id)a4 context:(id)a5 openHandler:(id /* block */)a6 closeHandler:(id /* block */)a7 errorHandler:(id /* block */)a8 messageHandler:(id /* block */)a9;
- (void)webSocketTaskDidEnd:(id)a0;
- (void).cxx_destruct;

@end
