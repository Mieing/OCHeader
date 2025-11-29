@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAUploadFileMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicAppID2UploadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)genUploadTaskID;
- (void)uploadFileWithAppID:(id)a0 appVersion:(unsigned long long)a1 isIgnoreCheckDomain:(BOOL)a2 taskID:(id)a3 url:(id)a4 filePath:(id)a5 fileFieldName:(id)a6 httpHeaders:(id)a7 formFields:(id)a8 context:(id)a9 completionHandler:(id /* block */)a10;
- (BOOL)abortUploadTask:(id)a0 taskID:(id)a1 getError:(id *)a2;
- (id)getAndNewUploadHandlerIfNotExistWithAppID:(id)a0 appVersion:(unsigned long long)a1 context:(id)a2;
- (id)getUploadHandler:(id)a0;
- (void)clearAllUploadHandler;
- (void)clearUploadHandlerWithAppID:(id)a0;
- (void)interruptUploadHandlerWithAppID:(id)a0;
- (void)onAppTaskTerminate:(id)a0;
- (void)onAppTaskBackgroundNetworkInterruptedTimeout:(id)a0;
- (void).cxx_destruct;

@end
