@class NSString, AWEFeedCacheDataDepository, NSTimer;

@interface AWEFeedCacheVideoDownloadProcessor : NSObject <AWEFeedCacheProcessor>

@property (retain, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (nonatomic) unsigned long long bitrateSelectType;
@property (nonatomic) BOOL downloadPicture;
@property (nonatomic) unsigned long long downloadType;
@property (copy, nonatomic) NSString *cacheDirectory;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *downloadTag;
@property (nonatomic) unsigned long long downloadLevel;
@property (retain, nonatomic) NSTimer *downloadTimer;
@property (nonatomic) double preloadSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onProcess:(id)a0 context:(id)a1;
- (id)initWithDataDepository:(id)a0 downloadType:(unsigned long long)a1 bitrateSelectType:(unsigned long long)a2 downloadPicture:(BOOL)a3 downloadTag:(id)a4 cacheDirectory:(id)a5 downloadLevel:(unsigned long long)a6 preloadSize:(double)a7;
- (void)preloadCacheWithStrategyMedias:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)preloadCacheWithPreloaderMedias:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)modelForDownloadModel:(id)a0;
- (void)p_preloadVideoImages:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
