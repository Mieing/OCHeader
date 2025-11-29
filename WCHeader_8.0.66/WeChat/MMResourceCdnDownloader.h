@class NSString, NSArray, MMResourceCdnDownloaderNotifier;
@protocol MMResourceDownloadDelegate;

@interface MMResourceCdnDownloader : NSObject <MMResourceCdnDownloaderNotifierDelegate, ICdnComMgrExt, MMResourceDownloader> {
    MMResourceCdnDownloaderNotifier *_notifier;
}

@property (retain, nonatomic) NSString *resUrl;
@property (retain, nonatomic) NSArray *arrDnsIp;
@property (nonatomic) BOOL waitForCDNInit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MMResourceDownloadDelegate> downloadDelegate;
@property (retain, nonatomic) NSString *downloadIdentifier;

+ (unsigned int)genIncreaseSequence;

- (id)initWithUrl:(id)a0;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)clearData;
- (void)mainThread_startDownload;
- (void)mainThread_cancelDownload;
- (void)reportWithKey:(unsigned int)a0;
- (void)onEndDownloading:(long long)a0 data:(id)a1;
- (void)onEndDownloading:(long long)a0 data:(id)a1 cdnResultCode:(long long)a2;
- (void)doNewDns;
- (void)createSaveFileDirIfNotExist;
- (id)getSaveFileDir;
- (id)getSaveFilePath;
- (void)reportCdnErrorWithRet:(int)a0;
- (void)onCdnDownloadFinish:(id)a0;
- (void)OnCdnInit;
- (void).cxx_destruct;

@end
