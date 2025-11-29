@class QOverseaProvider;

@interface QWorldTileOverlayCustomProvider : QWorldTileOverlayDataProvider

@property (retain, nonatomic) QOverseaProvider *userProvider;

- (id)init;
- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)onStyleChanged:(unsigned long long)a0;
- (void)resetDataWithConfig:(id)a0;
- (void).cxx_destruct;

@end
