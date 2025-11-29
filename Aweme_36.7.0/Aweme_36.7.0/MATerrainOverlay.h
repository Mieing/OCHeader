@class NSString, UIImage;

@interface MATerrainOverlay : MATileOverlay {
    struct shared_ptr<lbs::mapnative::MATileOverlayProvider> { struct MATileOverlayProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _tileProvider;
}

@property (readonly) NSString *terrainURLTemplate;
@property (readonly) NSString *terrainTextureURLTemplate;
@property (retain, nonatomic) UIImage *terrainDefalutImage;

- (void)createCppOverlay;
- (void *)getCppProvider;
- (id)initDefaultTerrainOverlay;
- (struct shared_ptr<lbs::mapnative::MATileOverlayProvider> { struct MATileOverlayProvider *x0; struct __shared_weak_count *x1; })getTileProvider;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;

@end
