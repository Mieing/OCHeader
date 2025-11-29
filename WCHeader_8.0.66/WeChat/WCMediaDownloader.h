@class WCDataItem, NSString, WCMediaItem;

@interface WCMediaDownloader : NSObject <WCFacadeExt, WCPlayerDownloaderExt>

@property (retain, nonatomic) WCMediaDownloader *retainedSelf;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) WCMediaItem *mediaItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 mediaItem:(id)a1;
- (void)dealloc;
- (void)_retainSelf;
- (void)_releaseSelf;
- (BOOL)hasDownloaded;
- (void)startDownloadWithCompletionHandler:(id /* block */)a0;
- (void)didFinishWithError:(id)a0;
- (void)clear;
- (BOOL)Image_hasDownloaded;
- (void)Image_startDownload;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (BOOL)Video_hasDownloaded;
- (void)Video_startDownload;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnCdnDownloadError:(id)a0;
- (void).cxx_destruct;

@end
