@class NSMutableDictionary;
@protocol EmoticonLensIconDownloaderDelegate;

@interface EmoticonLensIconDownloader : MMObject <ICdnComMgrExt>

@property (weak, nonatomic) id<EmoticonLensIconDownloaderDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *downloadingTasks;

- (id)initWithDelegate:(id)a0;
- (void)startDownloadLensIcon:(id)a0 filePath:(id)a1 forLensId:(id)a2;
- (void)onDownloadError:(id)a0;
- (void)onDownloadSuccess:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
