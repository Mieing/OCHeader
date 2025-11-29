@interface AWEVideoMusicStreamDownloader : NSObject

+ (BOOL)isNetworkURL:(id)a0;
+ (double)durationForURL:(id)a0;
+ (BOOL)httpAssetHasAudio:(id)a0;
+ (void)downloadMusicModel:(id)a0 params:(id)a1 extraTrack:(id)a2 progressHandler:(id /* block */)a3 playingHandler:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)createDirectoryIfNotExist;
+ (id)musicDirectory;
+ (id)musicErrorWithLocalizedDescription:(id)a0;
+ (id)musicDirectoryPath;
+ (void)cancelDownloadMusicModel:(id)a0;
+ (void)downloadMusicModel:(id)a0 params:(id)a1 extraTrack:(id)a2 playingHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)sharedInstance;
+ (BOOL)moveURL:(id)a0 toURL:(id)a1 error:(id *)a2;

- (void)downloadMusic:(id)a0 targetTime:(double)a1 progressHandler:(id /* block */)a2 playingHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (BOOL)enableMusicCacheFileNameByUrlKey;
- (void)downloadFileWithURLs:(id)a0 urlKey:(id)a1 cacheDirectory:(id)a2 targetTime:(double)a3 progressHandler:(id /* block */)a4 playingHandler:(id /* block */)a5 completion:(id /* block */)a6;
- (void)downloadFileWithURL:(id)a0 urlKey:(id)a1 targetTime:(double)a2 cacheDir:(id)a3 progressHandler:(id /* block */)a4 completion:(id /* block */)a5;

@end
