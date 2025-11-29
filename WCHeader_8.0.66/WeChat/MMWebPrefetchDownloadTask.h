@class NSURLSessionDownloadTask, MMWebPrefetchDownloadTaskRequest, NSURLSession;

@interface MMWebPrefetchDownloadTask : MMObject

@property (retain, nonatomic) MMWebPrefetchDownloadTaskRequest *request;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSURLSessionDownloadTask *sessionTask;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL isCancel;

- (id)initWithRequest:(id)a0 urlSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (void)cancel;
- (void)handleTaskDidFinishCollectingMetrics:(id)a0;
- (BOOL)saveRespHeaderFieldsData:(id)a0 toPath:(id)a1 error:(id *)a2 errMsg:(id *)a3;
- (BOOL)saveRespData:(id)a0 path:(id)a1 error:(id *)a2 errMsg:(id *)a3 dataSize:(unsigned int *)a4;
- (void)handleDownloadResponse:(id)a0 response:(id)a1 error:(id)a2;
- (id)errorWithCode:(long long)a0 description:(id)a1;
- (void)mainThread_callBackFailWithErrCode:(long long)a0 errMsg:(id)a1;
- (void)mainThread_callBackWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
