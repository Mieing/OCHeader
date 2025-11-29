@class MAMVTTileOverlayOptions;

@interface MAMVTTileOverlay : MATileOverlay {
    struct shared_ptr<lbs::mapnative::MAMVTTileOverlayProvider> { struct MAMVTTileOverlayProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _tileProvider;
}

@property (readonly, nonatomic) MAMVTTileOverlayOptions *option;

+ (id)mvtTileOverlayWithOption:(id)a0;

- (void)createCppOverlay;
- (void *)getCppProvider;
- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (id).cxx_construct;
- (void)dealloc;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;
- (id)URLForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;
- (id)initWithOption:(id)a0;

@end
