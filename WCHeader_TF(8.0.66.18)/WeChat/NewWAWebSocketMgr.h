@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NewWAWebSocketMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
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
- (void)connectSocketWithAppID:(id)a0 taskID:(id)a1 appVersion:(unsigned long long)a2 appType:(unsigned int)a3 appDebugModeType:(unsigned int)a4 isIgnoreCheckDomain:(BOOL)a5 isOpenProfile:(BOOL)a6 url:(id)a7 httpHeaders:(id)a8 subProtocols:(id)a9 context:(id)a10 completionHandler:(id /* block */)a11 openHandler:(id /* block */)a12 closeHandler:(id /* block */)a13 errorHandler:(id /* block */)a14 messageHandler:(id /* block */)a15;
- (void)closeSocketWithAppID:(id)a0 taskID:(id)a1 code:(long long)a2 reason:(id)a3 completionHandler:(id /* block */)a4;
- (void)sendString:(id)a0 withAppID:(id)a1 taskID:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendData:(id)a0 withAppID:(id)a1 taskID:(id)a2 completionHandler:(id /* block */)a3;
- (id)getAndNewHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 appType:(unsigned int)a2 appDebugModeType:(unsigned int)a3 context:(id)a4;
- (id)getHandlerWithAppID:(id)a0;
- (void)closeAndDeleteHandlerWithAppID:(id)a0;
- (void)interruptHandlerWithAppID:(id)a0;
- (void)closeAndDeleteAllWebSocketHandler;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (void).cxx_destruct;

@end
