@class NSString, NSMutableDictionary;

@interface AWERemoteResourceDownloader : NSObject <AWERemoteResourceDownloaderProtocol>

@property (retain, nonatomic) NSMutableDictionary *completionHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *downloadStatusMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileURLWithString:(id)a0;
+ (id)getLocalImageURLForURI:(id)a0;
+ (id)getLocalVideoURLForURI:(id)a0;
+ (BOOL)isVideoAssetReadyAtURL:(id)a0;
+ (id)downloader;

- (void)monitorDownloadEventForType:(long long)a0 success:(BOOL)a1 duration:(double)a2 isPredownload:(BOOL)a3 fileSize:(long long)a4 uri:(id)a5 error:(id)a6;
- (void)handleResourceValidForType:(id)a0 uri:(id)a1;
- (void)handleStartDownloadingForType:(id)a0 uri:(id)a1;
- (void)handleAlreadyDownloadingForType:(id)a0 uri:(id)a1 count:(long long)a2;
- (void)handleFinishDownloadingForType:(id)a0 uri:(id)a1;
- (void)handleStatusChangeForMessage:(id)a0;
- (void)downloadVideoWithURLList:(id)a0 URI:(id)a1 isPredownload:(BOOL)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)downloadImageWithURL:(id)a0 URI:(id)a1 isPredownload:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)downloadFileWithURL:(id)a0 destinationDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
