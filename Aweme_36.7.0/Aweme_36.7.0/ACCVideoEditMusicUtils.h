@interface ACCVideoEditMusicUtils : NSObject

+ (BOOL)isNetworkURL:(id)a0;
+ (void)cacheUrlAsset:(id)a0;
+ (BOOL)musicEnableStreamDownload:(id)a0;
+ (double)assetDurationForURL:(id)a0;
+ (double)musicPlayDurationForMusicModel:(id)a0;
+ (BOOL)httpAssetHasAudio:(id)a0;
+ (double)musicPlayDurationForURL:(id)a0 shootDuration:(id)a1;
+ (id)localMusicAssetForURL:(id)a0;
+ (BOOL)musicEnableStreamDownload;
+ (BOOL)musicEnableStreamDownloadConsiderNetwork;
+ (id)urlAssetForUrl:(id)a0;
+ (id)musicAssetWithPublishModel:(id)a0;
+ (id)displayTitleOfMusic:(id)a0 publishModel:(id)a1;

@end
