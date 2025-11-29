@class WePkgDownloader, NSString, NSMutableArray, WePkgFileDownloadInfo;

@interface WePkgDownloadMgr : MMObject <WePkgDownloaderDelegate> {
    NSMutableArray *_arrWaitingDownloadList;
    WePkgFileDownloadInfo *_currDownladInfo;
    WePkgDownloader *_downloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addToDownloadList:(id)a0;
- (void)cancelDownloadIfVersionNotMatch:(id)a0 Version:(id)a1;
- (void)clearCurrentDownloadingTask;
- (void)tryNextDownload;
- (void)downloaderDidFinishDownloadFor:(id)a0 TmpFilePath:(id)a1 isSuccess:(BOOL)a2 isLocalValidFile:(BOOL)a3;
- (int)checkIfFileValidAfterDownloadSuccess:(id)a0 TmpFilePath:(id)a1;
- (void).cxx_destruct;

@end
