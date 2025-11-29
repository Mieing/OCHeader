@interface MATileOverlayRendererBridge : MABaseRendererBridge

- (void *)cppRenderer;
- (void)initializeCppRenderer;
- (void)glRender;
- (id)tileOverlay;
- (void)setDisableOffScreenTileLoading:(BOOL)a0;
- (BOOL)isAllTilesDataLoaded;
- (void)reloadData;

@end
