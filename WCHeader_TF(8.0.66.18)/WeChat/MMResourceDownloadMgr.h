@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MMResDownloadMgrDelegate;

@interface MMResourceDownloadMgr : NSObject <MMResourceDownloadTaskDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_taskWaitQueue;
    NSMutableDictionary *_dicDownloadingTask;
}

@property (weak, nonatomic) id<MMResDownloadMgrDelegate> downloadMgrDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addDownloadTask:(id)a0;
- (void)cancelDownload:(id)a0;
- (void)cancelDownload:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (void)workThread_addDownloadTask:(id)a0;
- (void)workThread_cancelDownload:(id)a0;
- (void)workThread_cancelDownload:(unsigned int)a0 WithSubtype:(unsigned int)a1;
- (BOOL)isTaskInWaitOrDownloadQueue:(id)a0;
- (unsigned long long)insertIndexInWaitQueue:(id)a0;
- (void)addDownloadTaskToWaitQueue:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeDownloadTasksFromWaitQueue:(id)a0;
- (void)addDownloadTaskToDonwloadQueue:(id)a0;
- (void)removeDownloadTaskFromDownloadQueue:(id)a0;
- (void)checkQueue;
- (id)retryTaskFromDownloadTask:(id)a0;
- (void)handleDownloadTaskFinish:(long long)a0 downloadData:(id)a1 task:(id)a2 isRetry:(BOOL *)a3;
- (void)notifyDownloadTaskEnd:(long long)a0 downloadData:(id)a1 task:(id)a2;
- (void)onDownloadFinish:(long long)a0 downloadData:(id)a1 task:(id)a2;
- (void)workThread_onDownloadFinish:(long long)a0 downloadData:(id)a1 task:(id)a2;
- (void).cxx_destruct;

@end
