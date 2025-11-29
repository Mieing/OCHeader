@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MBDownloadFileMgr : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *_dicBizName2DownloadHandler;
    NSObject<OS_dispatch_queue> *_workerQueue;
    unsigned int _taskIDSequence;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onBizPause:(id)a0;
- (void)onBizDestory:(id)a0;
- (id)genDownloadTaskID;
- (void)downloadFileWithBizName:(id)a0 taskID:(id)a1 url:(id)a2 httpHeaders:(id)a3 context:(id)a4 completionHandler:(id /* block */)a5 headerHandler:(id /* block */)a6 progressHandler:(id /* block */)a7;
- (BOOL)abortDownloadTask:(id)a0 taskID:(id)a1 getError:(id *)a2;
- (id)getAndNewDownloadHandlerIfNotExistWithBizName:(id)a0 context:(id)a1;
- (id)getDownloadHandler:(id)a0;
- (void)clearDownloadHandlerWithBizName:(id)a0;
- (void)interruptDownloadHandlerWithBizName:(id)a0;
- (void)clearAllDownloadHandler;
- (void).cxx_destruct;

@end
