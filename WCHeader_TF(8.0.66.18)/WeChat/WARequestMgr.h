@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WARequestMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicAppID2RequestHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genRequestTaskID;
- (void)requestWithAppID:(id)a0 appVersion:(unsigned long long)a1 isIgnoreCheckDomain:(BOOL)a2 taskID:(id)a3 url:(id)a4 ip:(id)a5 port:(unsigned int)a6 host:(id)a7 forbidReuse:(BOOL)a8 data:(id)a9 httpHeaders:(id)a10 method:(id)a11 context:(id)a12 isUseCronet:(BOOL)a13 useQuic:(BOOL)a14 useHttp2:(BOOL)a15 useCache:(BOOL)a16 useChunked:(BOOL)a17 appType:(unsigned int)a18 forceCellularNetwork:(BOOL)a19 completionHandler:(id /* block */)a20;
- (BOOL)abortRequestTask:(id)a0 taskID:(id)a1 getError:(id *)a2;
- (void)clearAllRequestHandler;
- (void)clearRequestHandlerWithAppID:(id)a0;
- (void)interruptRequestHandlerWithAppID:(id)a0;
- (id)getAndNewRequestHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (id)getRequestHandler:(id)a0;
- (BOOL)verifyMethod:(id *)a0;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (void).cxx_destruct;

@end
