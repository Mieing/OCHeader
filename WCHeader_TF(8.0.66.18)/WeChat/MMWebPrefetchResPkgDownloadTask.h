@class NSURLSession, MMWebPrefetchDownloadTask, MMWebPrefetchResPkgDownloadRequest;

@interface MMWebPrefetchResPkgDownloadTask : NSObject

@property (retain, nonatomic) MMWebPrefetchResPkgDownloadRequest *request;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) MMWebPrefetchDownloadTask *downloadPkgTask;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL isCancel;

- (id)initWithRequest:(id)a0 urlSession:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (void)onDownloadBasePkgSuccessWithResult:(id)a0 request:(id)a1;
- (void)onMergePkgSuccessWithData:(id)a0;
- (void)subThread_mergeResPkgWithBasePkgPath:(id)a0 patchPkgPath:(id)a1 completion:(id /* block */)a2;
- (id)mergeResPkgWithBasePkgPath:(id)a0 patchPkgPath:(id)a1;
- (void)subThread_verifyLocalFileMd5:(id)a0 pkgFilePath:(id)a1 completion:(id /* block */)a2;
- (void)subThread_verifyLocalFileMd5:(id)a0 pkgFileData:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifyLocalFileMd5:(id)a0 pkgFilePath:(id)a1;
- (BOOL)verifyLocalFileMd5:(id)a0 pkgFileData:(id)a1;
- (void)cancel;
- (void)mainThread_callBackFailWithErrorMsg:(id)a0;
- (void)mainThread_callBackSuccessWithPkgPath:(id)a0;
- (void).cxx_destruct;

@end
