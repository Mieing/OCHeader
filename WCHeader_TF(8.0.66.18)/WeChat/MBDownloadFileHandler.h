@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MBDownloadFileHandler : NSObject <MBDownloadFileTaskDelegate> {
    NSString *_bizName;
    unsigned int _maxTaskCount;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_queue> *_dnsQueue;
    NSMutableArray *_arrDownloadTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBizName:(id)a0 workerQueue:(id)a1 context:(id)a2;
- (void)startDownloadTaskWithUrl:(id)a0 taskID:(id)a1 httpHeaders:(id)a2 context:(id)a3 completionHandler:(id /* block */)a4 headerHandler:(id /* block */)a5 progressHandler:(id /* block */)a6;
- (id)GetHttpHeaderReferer;
- (BOOL)abortDownloadTask:(id)a0 getError:(id *)a1;
- (void)invalidate;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewDownloadTask:(id)a0;
- (id)getDownloadTaskWithTaskID:(id)a0;
- (void)deleteTask:(id)a0;
- (void)cancelAndDeleteAllTaskWithError:(id)a0;
- (void)downloadFileTaskDidEnd:(id)a0;
- (void).cxx_destruct;

@end
