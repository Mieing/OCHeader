@class NSString;

@interface AFDImagePreloadManager : NSObject <AFDImagePreloadManagerProtocol>

@property (nonatomic) BOOL isMemoryDangerTopLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadImageWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2;
+ (void)preloadWithAwemeModel:(id)a0 preloadIndex:(long long)a1 referString:(id)a2 completion:(id /* block */)a3;
+ (void)preloadImageByMultiBitrateAndSRIfNeededWithModel:(id)a0 referString:(id)a1 imageModel:(id)a2 completion:(id /* block */)a3;
+ (void)preloadRemainImageWithModel:(id)a0 currentIndex:(long long)a1 referString:(id)a2 completion:(id /* block */)a3;
+ (id)coverImageWithImageModel:(id)a0 index:(long long)a1 awemeModel:(id)a2 referString:(id)a3;
+ (id)setImageOfImageView:(id)a0 referString:(id)a1 awemeModel:(id)a2 withImageModel:(id)a3 placeholder:(id)a4 needSR:(BOOL)a5 containerSize:(struct CGSize { double x0; double x1; })a6 notFadeOut:(BOOL)a7 completion:(id /* block */)a8;
+ (void)preloadRemainImageWithModel:(id)a0 currentIndex:(long long)a1 referString:(id)a2 preloadNextCount:(id)a3 completion:(id /* block */)a4;
+ (void)preloadColdStartCacheImageWithModel:(id)a0;
+ (void)smartPreloadImageWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2 bizScene:(id)a3;
+ (void)preloadImageWithURLArray:(id)a0 awemeModel:(id)a1 completion:(id /* block */)a2;
+ (void)setImageOfImageView:(id)a0 referString:(id)a1 awemeModel:(id)a2 withImageModel:(id)a3 placeholder:(id)a4 completion:(id /* block */)a5;
+ (void)preloadImageWithDatasource:(id)a0 currentIndex:(long long)a1 referString:(id)a2 preCount:(long long)a3 nextCount:(long long)a4 preloadCount:(long long)a5;
+ (void)selectBSModelAndUpdateConfigForModel:(id)a0;
+ (BOOL)enableAlbumMemoryOptimize;
+ (unsigned long long)preloadImageOptions;
+ (void)preloadImageModel:(id)a0 referString:(id)a1 awemeModel:(id)a2 needSR:(BOOL)a3 needImagePrefetch:(BOOL)a4 options:(unsigned long long)a5 completion:(id /* block */)a6;
+ (void)preloadImageModel:(id)a0 referString:(id)a1 awemeModel:(id)a2 needSR:(BOOL)a3 needImagePrefetch:(BOOL)a4 options:(unsigned long long)a5 isColdStart:(BOOL)a6 completion:(id /* block */)a7;
+ (BOOL)enableSharpWithImageModel:(id)a0 awemeModel:(id)a1 isPreload:(BOOL)a2;
+ (id)sharpTransformerWithImageModel:(id)a0 awemeModel:(id)a1 isPreload:(BOOL)a2;
+ (id)srTransformerWithImageModel:(id)a0 awemeModel:(id)a1;
+ (void)preloadImageWithURLArray:(id)a0 referString:(id)a1 awemeModel:(id)a2 transformer:(id)a3 needImagePrefetch:(BOOL)a4 options:(unsigned long long)a5 isColdStart:(BOOL)a6 completion:(id /* block */)a7;
+ (id)srTransformerWithImageModel:(id)a0 awemeModel:(id)a1 containerSize:(struct CGSize { double x0; double x1; })a2;
+ (double)convertToTargetLevelResult:(double)a0;
+ (id)cacheNameWithReferString:(id)a0;
+ (id)preload_safeURL:(id)a0;
+ (unsigned long long)heicProgressImageOptionsWithOptions:(unsigned long long)a0;
+ (void)setImageOfImageView:(id)a0 referString:(id)a1 awemeModel:(id)a2 withImageModel:(id)a3 placeholder:(id)a4 needSR:(BOOL)a5 containerSize:(struct CGSize { double x0; double x1; })a6 completion:(id /* block */)a7;
+ (unsigned long long)imageOptionsWithoutFadeOut;
+ (BOOL)videoPreloadEnabled;
+ (void)preloadImageModel:(id)a0 referString:(id)a1 awemeModel:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)imageOptions;
+ (id)sharedManager;

- (void)didReceiveMemoryDangerLevelTopNotification;
- (void)didReceiveMemoryBalanceRealTimeDangerLevelSecondaryNotification;
- (id)init;

@end
