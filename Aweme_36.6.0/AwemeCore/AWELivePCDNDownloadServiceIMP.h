@class NSString;

@interface AWELivePCDNDownloadServiceIMP : NSObject <IESLivePCDNDownloadService>

@property (nonatomic) int errorCodeOnLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_launchConfigStrWithConfig:(id)a0;
- (BOOL)p_isPCDNDownloaderLaunched;
- (void)launchDownloadServiceWithConfig:(id)a0 launchError:(id *)a1;
- (void)stopDownloadService;
- (void)createDownloadTaskWithUrl:(id)a0 fileUniqId:(id)a1 filePath:(id)a2 completeHandler:(id /* block */)a3 taskStartError:(id *)a4;
- (void)safeDeleteDownloadedFileWithFilePath:(id)a0 error:(id *)a1;
- (id)init;

@end
