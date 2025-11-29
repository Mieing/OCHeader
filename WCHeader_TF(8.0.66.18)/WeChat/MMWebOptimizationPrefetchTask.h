@class MMWebPrefetchResPkgDownloadTask, NSURLSession, MMWebPrefetchInjectTask, MMWebOptimizationPrefetchRequest, MMWebPrefetchDownloadTask, NSMutableArray;
@protocol MMWebOptimizationPrefetchTaskDelegate;

@interface MMWebOptimizationPrefetchTask : MMObject

@property (nonatomic) unsigned int taskId;
@property (retain, nonatomic) MMWebOptimizationPrefetchRequest *request;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) MMWebPrefetchDownloadTask *documentDownloadTask;
@property (retain, nonatomic) MMWebPrefetchResPkgDownloadTask *resPkgDownloadTask;
@property (retain, nonatomic) MMWebPrefetchInjectTask *injectTask;
@property (retain, nonatomic) NSMutableArray *waitingDownloadTaskQueue;
@property (retain, nonatomic) NSMutableArray *downloadingTaskQueue;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableArray *arrPrefetchSuccResInfo;
@property (nonatomic) BOOL hasResPrefetchFail;
@property (nonatomic) BOOL isTaskCancel;
@property (weak, nonatomic) id<MMWebOptimizationPrefetchTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ pkgFetchCompletionHandler;

+ (unsigned int)genTaskId;
+ (unsigned int)genSubTaskRequestId;

- (id)initWithRequest:(id)a0 urlSession:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (void)start;
- (void)startAllUrlModeDownload;
- (void)startAllPkgModeDownload;
- (void)startDocUrlResPkgModeDownload;
- (void)startDocTransferResPkgDownload;
- (void)onTransferMainDocCallBack:(BOOL)a0 errMsg:(id)a1 respContent:(id)a2 respHeader:(id)a3;
- (BOOL)saveTransferMainDocContent:(id)a0 header:(id)a1;
- (BOOL)isUrlInPkgInjectBlackList:(id)a0;
- (void)startFetchPkgWithRespHeader:(id)a0 documentUrl:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleDocUrlDownloadResult:(id)a0;
- (void)cancel;
- (id)identifier;
- (id)domain;
- (BOOL)containSessionTask:(id)a0;
- (void)checkFinishDownload;
- (void)checkAllUrlModeFinishDownload;
- (void)checkDocUrlResPkgModeFinishDownload;
- (void)startDownloadDocument:(id /* block */)a0;
- (void)handleURLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (id)handleURLSession:(id)a0 task:(id)a1 performRedirection:(id)a2 newRequest:(id)a3;
- (void)handleMainDocumentDownloadResult:(id)a0 error:(id)a1;
- (void)startDownloadResFile;
- (void)handleResourceDownload:(id)a0 result:(id)a1 error:(id)a2;
- (void)startFetchPkg;
- (void)startInjectTask;
- (void)startInjectTaskWithPkgPath:(id)a0 htmlStringInPkg:(BOOL)a1;
- (id)genCorsOrigin:(id)a0 withDocumentUrl:(id)a1;
- (void)mainThread_callBackFailWithError:(id)a0;
- (void)mainThread_callBackSuccess;
- (id)errorWithCode:(long long)a0 description:(id)a1;
- (void).cxx_destruct;

@end
