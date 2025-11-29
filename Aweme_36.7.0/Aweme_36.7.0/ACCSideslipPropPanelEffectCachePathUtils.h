@interface ACCSideslipPropPanelEffectCachePathUtils : NSObject

+ (id)createEffectCachePathWithEffect:(id)a0 atIndex:(id)a1 withRepository:(id)a2;
+ (void)writeRenderCacheIfNeededWithPath:(id)a0 withRepository:(id)a1;
+ (id)effectCachePathWithEffect:(id)a0 atIndex:(id)a1 withRepository:(id)a2;
+ (id)getRecordEffectCachePathWithEffect:(id)a0 withRepository:(id)a1;
+ (void)copyEffectCacheFilesFromDirectory:(id)a0 toDirectory:(id)a1;
+ (void)clearEffectCachePathWithEffect:(id)a0 atIndex:(id)a1 withRepository:(id)a2;
+ (void)initEffectCachePathIfNeededWithPath:(id)a0 withRepository:(id)a1;
+ (void)writeAsyncRenderedImageIfNeededWithPath:(id)a0 withRepository:(id)a1;

@end
