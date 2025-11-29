@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WADownloadFileMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicAppID2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genDownloadTaskID;
- (void)downloadFileWithAppID:(id)a0 appVersion:(unsigned long long)a1 isIgnoreCheckDomain:(BOOL)a2 taskID:(id)a3 url:(id)a4 httpHeaders:(id)a5 context:(id)a6 isUseCronet:(BOOL)a7 useQuic:(BOOL)a8 useHttp2:(BOOL)a9 useCache:(BOOL)a10 appType:(unsigned int)a11 completionHandler:(id /* block */)a12 headerHandler:(id /* block */)a13 progressHandler:(id /* block */)a14;
- (BOOL)abortDownloadTask:(id)a0 taskID:(id)a1 getError:(id *)a2;
- (id)getAndNewDownloadHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (id)getDownloadHandler:(id)a0;
- (void)clearDownloadHandlerWithAppID:(id)a0;
- (void)interruptDownloadHandlerWithAppID:(id)a0;
- (void)clearAllDownloadHandler;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (void).cxx_destruct;

@end
