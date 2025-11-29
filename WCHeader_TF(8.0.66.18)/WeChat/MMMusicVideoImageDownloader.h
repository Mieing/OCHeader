@class NSString, NSData;

@interface MMMusicVideoImageDownloader : NSObject <MMImageLoaderObserver>

@property (copy, nonatomic) id /* block */ imageCallback;
@property (retain, nonatomic) NSString *currentDownloadingUrl;
@property (retain, nonatomic) NSData *thumbImageData;
@property (nonatomic) BOOL hasFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trigerDownload:(id)a0;
- (void)downloadThubmImage:(id)a0 callback:(id /* block */)a1;
- (void)onWaitTimeOut;
- (id)compressImageData:(id)a0;
- (void)dealloc;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoadWithData:(id)a0 Url:(id)a1;
- (void)doCallback;
- (void).cxx_destruct;

@end
