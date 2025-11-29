@interface AWEHotSpotChannelVideoDownloadTool : NSObject

+ (void)preloadAweme:(id)a0 percentage:(id /* block */)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4;
+ (void)removeDownloadVideoWithAweme:(id)a0;
+ (id)videoBSModelWithAweme:(id)a0;
+ (id)playAddrURLModelWithAweme:(id)a0 bitrateModel:(id)a1;
+ (void)initPreCacheModelWithAweme:(id)a0 playAddrURLModel:(id)a1 bitrateModel:(id)a2;
+ (unsigned long long)downloadSizeWithPlayAddrURLModel:(id)a0 percentage:(double)a1;
+ (void)downloadVideoWithAweme:(id)a0 kbSize:(unsigned long long)a1 playAddrURLModel:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (void)preloadImageWithAweme:(id)a0;

@end
