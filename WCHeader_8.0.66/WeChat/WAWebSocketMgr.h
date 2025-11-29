@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAWebSocketMgr : MMUserService <WAWebSocketHandlerDelegate, WAAppTaskMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicAppID2WebSocketHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genSocketTaskID;
- (void)connectSocketWithAppID:(id)a0 compatibleSingleConnection:(BOOL)a1 taskID:(id)a2 appVersion:(unsigned long long)a3 isIgnoreCheckDomain:(BOOL)a4 url:(id)a5 httpHeaders:(id)a6 subProtocols:(id)a7 context:(id)a8 completionHandler:(id /* block */)a9 openHandler:(id /* block */)a10 closeHandler:(id /* block */)a11 errorHandler:(id /* block */)a12 messageHandler:(id /* block */)a13;
- (void)closeSocketWithAppID:(id)a0 compatibleSingleConnection:(BOOL)a1 taskID:(id)a2 code:(long long)a3 reason:(id)a4 completionHandler:(id /* block */)a5;
- (void)sendString:(id)a0 withAppID:(id)a1 compatibleSingleConnection:(BOOL)a2 taskID:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendData:(id)a0 withAppID:(id)a1 compatibleSingleConnection:(BOOL)a2 taskID:(id)a3 completionHandler:(id /* block */)a4;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (id)getHandlerWithAppID:(id)a0;
- (void)closeAndDeleteHandlerWithAppID:(id)a0;
- (void)interruptHandlerWithAppID:(id)a0;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (id)getNewSocketTaskID;
- (void).cxx_destruct;

@end
