@interface AWEFileStreamDownloader : NSObject

+ (id)fileCacheWithURL:(id)a0 cacheDir:(id)a1;
+ (BOOL)httpAssetHasAudio:(id)a0;
+ (void)downloadFileWithRequest:(id /* block */)a0;
+ (double)durationWithURL:(id)a0;
+ (void)cancelDownloadFileWithURL:(id)a0;
+ (id)sharedInstance;

- (void)downloadFileWithRequest:(id)a0;

@end
