@class NSMutableArray, NSString, WADownloadFileConfig, NSURLSession, NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface WAPreDownloadFileHandler : NSObject <WADownloadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate> {
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WADownloadFileConfig *_downloadFileConfig;
    NSMutableArray *_arrDownloadTask;
    NSMutableArray *_arrTodoDownloadTask;
    NSURLSession *_urlSession;
    NSMutableDictionary *_downloadCompletionHandlerDic;
}

@property (retain) NSNumber *_hasDownloadedFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)getHasDownloadedFileSize;
- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 workerQueue:(id)a2 context:(id)a3;
- (void)dealloc;
- (void)startDownloadTaskWithUrl:(id)a0 taskID:(id)a1 httpHeaders:(id)a2 isIgnoreCheckDomain:(BOOL)a3 context:(id)a4 completionHandler:(id /* block */)a5;
- (BOOL)abortDownloadTask:(id)a0 getError:(id *)a1;
- (void)invalidate;
- (void)setupNSURLSession;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewDownloadTask:(id)a0;
- (id)addNewTodoDownloadTask:(id)a0;
- (id)getDownloadTaskWithTask:(id)a0;
- (id)getDownloadTaskWithTaskID:(id)a0;
- (void)deleteTask:(id)a0;
- (void)cancelAndDeleteAllTaskWithError:(id)a0 errNo:(id)a1;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)a0;
- (void)markRedirectFailWithSessionTask:(id)a0 host:(id)a1;
- (void)cancelTaskForExceedMaxSize:(id)a0;
- (unsigned int)maxTaskCount;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)downloadFileTaskDidEnd:(id)a0;
- (void).cxx_destruct;

@end
