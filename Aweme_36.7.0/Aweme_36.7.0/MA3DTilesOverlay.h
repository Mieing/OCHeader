@class NSString, MA3DTileBuildingOption;

@interface MA3DTilesOverlay : MATileOverlay {
    struct shared_ptr<lbs::mapnative::MA3DTilesOverlayProvider> { struct MA3DTilesOverlayProvider *__ptr_; struct __shared_weak_count *__cntrl_; } _tileProvider;
}

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) MA3DTileBuildingOption *buildingOption;

- (void)createCppOverlay;
- (void *)getCppProvider;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)loadTileAtPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 result:(id /* block */)a1;
- (id)URLForTilePath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0;

@end
