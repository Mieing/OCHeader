@interface CdnServiceVideoDownloader : NSObject

+ (void)preloadVideoMsg:(id)a0 behavior:(long long)a1 percent:(int)a2 progressBlock:(id /* block */)a3 preloadCompleteBlock:(id /* block */)a4;
+ (void)onDownloadComplete:(id)a0 argsWrap:(id)a1;
+ (BOOL)checkPreloadCacheWithMsgWrap:(id)a0;
+ (id)generateDownloadArgsWrapWithVideoMsg:(id)a0 percent:(int)a1;

@end
