@class WePkgFileDownloadInfo, NSURLSessionDownloadTask;
@protocol WePkgDownloaderDelegate;

@interface WePkgDownloader : MMObject

@property (retain, nonatomic) WePkgFileDownloadInfo *downloadInfo;
@property (weak, nonatomic) id<WePkgDownloaderDelegate> delegate;
@property (retain, nonatomic) NSURLSessionDownloadTask *downloadTask;

- (id)initWithPkgDownloadInfo:(id)a0 delegate:(id)a1;
- (id)getFilePathIfAlreadyDownloaded;
- (void)startDownload;
- (void)handleDownloadEndForUrl:(id)a0 storeIn:(id)a1 andResponse:(id)a2 andError:(id)a3;
- (void)applyPatchIfNeed:(id)a0 completion:(id /* block */)a1;
- (int)applyBsPatch:(id)a0 oldFile:(id)a1 newFile:(id)a2;
- (void)cancelDownload;
- (void).cxx_destruct;

@end
