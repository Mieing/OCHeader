@class UIImage;

@interface MATerrainOverlayRendererBridge : MATileOverlayRendererBridge

@property (retain, nonatomic) UIImage *terrainDefaultImage;

- (void)initializeCppRenderer;
- (void).cxx_destruct;

@end
