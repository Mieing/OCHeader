@class NSObject, RingDownloadInfo;

@interface RingDownloadTask : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) RingDownloadInfo *info;
@property (copy, nonatomic) id /* block */ resolve;
@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) NSObject *selfHolder;

- (id)initWithDownloadInfo:(id)a0;
- (id)startdownloadRingFile;
- (void)OnCdnDownload:(id)a0;
- (void)cancelTask;
- (void).cxx_destruct;

@end
