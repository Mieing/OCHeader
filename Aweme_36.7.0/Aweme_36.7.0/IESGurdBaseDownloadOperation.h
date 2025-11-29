@class NSString, IESGurdODRDownloader, IESGurdDownloadPackageInfo, IESGurdResourceModel, IESGurdDownloadInfoModel;

@interface IESGurdBaseDownloadOperation : NSOperation

@property (nonatomic) BOOL isPatch;
@property (retain, nonatomic) IESGurdResourceModel *config;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property long long downloadPriority;
@property (retain, nonatomic) IESGurdDownloadPackageInfo *downloadPackageInfo;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) IESGurdDownloadInfoModel *downloadInfoModel;
@property (retain, nonatomic) IESGurdODRDownloader *odrDownloader;
@property (retain, nonatomic) IESGurdODRDownloader *odrOldDownloader;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) BOOL retryDownload;

+ (id)operationWithConfig:(id)a0 isPatch:(BOOL)a1 downloadCompletion:(id /* block */)a2;

- (BOOL)checkNeedDownload;
- (void)log:(id)a0 hasError:(BOOL)a1;
- (void)downloadOdr;
- (void)onCheckError:(long long)a0 msg:(id)a1;
- (BOOL)isResourceActiveWithMeta:(id)a0;
- (void)handleOperationCancel;
- (id)getUpdateStageMode:(BOOL)a0;
- (void)sendUpdateStats;
- (void)innerFinishDownload:(BOOL)a0 error:(id)a1;
- (void)callDownloadCompletion:(BOOL)a0 error:(id)a1;
- (void)handleDownloadResult:(id)a0 downloadInfo:(id)a1 error:(id)a2;
- (void)downloadOdrNew:(id /* block */)a0;
- (void)handleDownloadResultWithDownloadInfo:(id)a0 succeed:(BOOL)a1 error:(id)a2;
- (void)handleBusinessFailedWithType:(id)a0;
- (void)updateDownloadPriority:(long long)a0;
- (id)getResourceModel;
- (void).cxx_destruct;
- (BOOL)isConcurrent;
- (void)start;
- (void)cancel;
- (void)operationDidStart;

@end
