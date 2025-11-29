@class LVVEBundleDataSourceProvider, NSMutableDictionary, LVVETailLeaderCache, NSCache;

@interface LVVEDataCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mapLock;
    LVVEBundleDataSourceProvider *_bundleDataSource;
    struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *__ptr_; struct __shared_weak_count *__cntrl_; } _project;
}

@property (retain, nonatomic) NSCache *videoStableCacheMap;
@property (retain, nonatomic) NSMutableDictionary *stickerCacheMap;
@property (retain, nonatomic) NSMutableDictionary *textTemplateCacheMap;
@property (retain, nonatomic) NSMutableDictionary *filterCacheMap;
@property (retain, nonatomic) NSMutableDictionary *figureCacheMap;
@property (retain, nonatomic) NSMutableDictionary *chromaCacheMap;
@property (retain, nonatomic) NSMutableDictionary *localVideoEffectCacheMap;
@property (retain, nonatomic) NSMutableDictionary *globalVideoEffectCacheMap;
@property (retain, nonatomic) NSMutableDictionary *adjustCacheMap;
@property (retain, nonatomic) NSMutableDictionary *audioFiltersCacheMap;
@property (retain, nonatomic) LVVETailLeaderCache *tailLeaderCache;
@property (retain, nonatomic) NSMutableDictionary *maskCacheMap;
@property (retain, nonatomic) NSMutableDictionary *globalEffectCacheMap;
@property (copy, nonatomic) id /* block */ effectRenderIndexBlock;

- (void)addAudioFilter:(id)a0 video:(BOOL)a1 forKey:(id)a2;
- (BOOL)isStickerExistedWithTaskID:(long long)a0;
- (id)audioFilterWithSegmentID:(id)a0 type:(int)a1;
- (id)initWithBundleDataSource:(id)a0 project:(const void *)a1;
- (void)addStickerTaskID:(long long)a0 forKey:(id)a1;
- (id)diffGlobalEffectNeededUpdateWithSegment:(void *)a0 effectSegments:(void *)a1 videoAsset:(id)a2;
- (void)deleteGlobalEffectWithVideoAsset:(id)a0 effectSegmentID:(id)a1;
- (void)addGlobalEffectWithVideoAsset:(id)a0 effectSegmentID:(id)a1 featureID:(id)a2 feature:(id)a3;
- (void)updateGlobalEffectWithVideoAsset:(id)a0 effectSegmentID:(id)a1 featureID:(id)a2 feature:(id)a3;
- (BOOL)isGlobalEffectExistedWithVideoAsset:(id)a0 effectSegment:(void *)a1;
- (id)diffWithFigures:(const void *)a0 rootPath:(id)a1 segment:(const void *)a2;
- (id)diffWithFilter:(const void *)a0 segment:(const void *)a1;
- (id)diffWithAdjusts:(const void *)a0 videoSegment:(void *)a1;
- (void)removeAdjustMap:(id)a0 forKey:(id)a1;
- (void)addAdjustMap:(id)a0 forKey:(id)a1;
- (id)diffWithChroma:(const void *)a0 segment:(const void *)a1;
- (id)diffsubVideoEffectsWithVideoSegment:(void *)a0 effectSegments:(void *)a1;
- (id)diffMainVidoeEffectWithVideoSegment:(void *)a0 effectSegments:(void *)a1;
- (id)diffGlobalVideoEffect:(const void *)a0 effectSegment:(void *)a1;
- (id)diffVideoMask:(struct shared_ptr<CutSame::MaterialMask> { struct MaterialMask *x0; struct __shared_weak_count *x1; })a0 segment:(struct shared_ptr<CutSame::Segment> { struct Segment *x0; struct __shared_weak_count *x1; })a1 rootPath:(id)a2 videoCropSize:(struct CGSize { double x0; double x1; })a3;
- (id)featureWithSegment:(const void *)a0 effectSegment:(void *)a1 effectPayload:(void *)a2;
- (BOOL)updateIfNeededWithOldFeature:(id)a0 feature:(id)a1;
- (id)getEffectAdjustParams:(const void *)a0;
- (id)getKeyWithSegment:(void *)a0;
- (void)deleteGlobalEffectWithVideoAsset:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
