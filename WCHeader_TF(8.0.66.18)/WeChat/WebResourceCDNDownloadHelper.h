@class NSMutableArray, WebviewLocalResItem;
@protocol WebResourceCDNDownloadHelperDelegate;

@interface WebResourceCDNDownloadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate> {
    BOOL _isDownloading;
    NSMutableArray *_downloadArray;
    WebviewLocalResItem *_curDownloadingItem;
}

@property (weak, nonatomic) id<WebResourceCDNDownloadHelperDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)addDownloadItem:(id)a0;
- (BOOL)startDownload;
- (BOOL)stopDownload;
- (void)sendGetCdnURLRequest;
- (void)sendDownloadRequest;
- (void)startDownloadNextItem;
- (void)handleGetCdnIdResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnCdnDownloadProgress:(id)a0;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
