@class NSMutableArray, NSString, NSURLSession, NSObject, WAUploadFileConfig;
@protocol OS_dispatch_queue;

@interface WAUploadFileHandler : NSObject <WAUploadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAUploadFileConfig *_uploadFileConfig;
    NSMutableArray *_arrUploadTask;
    NSURLSession *_urlSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 workerQueue:(id)a2 context:(id)a3;
- (void)dealloc;
- (void)startUploadTaskWithURL:(id)a0 taskID:(id)a1 filePath:(id)a2 fileFieldName:(id)a3 httpHeaders:(id)a4 formFields:(id)a5 isIgnoreCheckDomain:(BOOL)a6 context:(id)a7 completionHandler:(id /* block */)a8;
- (BOOL)abortUploadTask:(id)a0 getError:(id *)a1;
- (void)invalidate;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewUploadTask:(id)a0 context:(id)a1 uploadConfig:(id)a2;
- (id)getUploadTaskWithTask:(id)a0;
- (id)getUploadTaskWithTaskID:(id)a0;
- (void)deleteTask:(id)a0;
- (void)cancelAndDeleteAllTaskWithError:(id)a0 errNo:(id)a1;
- (void)setupNSURLSession;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)a0;
- (void)markRedirectFailWithSessionTask:(id)a0 host:(id)a1;
- (unsigned int)maxTaskCount;
- (void)uploadFileTaskDidEnd:(id)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void).cxx_destruct;

@end
