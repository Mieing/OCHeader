@class NSString, MATileOverlay;

@interface MATileOverlayRenderer : MAOverlayRenderer <NSCacheDelegate> {
    double _screenScale;
    int _xMin;
    int _xMax;
    int _yMin;
    int _yMax;
    int _z;
}

@property (readonly, nonatomic) MATileOverlay *tileOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)glRender;
- (void)willRemove;
- (void)initializeRendererBridge;
- (id)getCurrentTiles;
- (id)getCurrentBaseMapTiles;
- (BOOL)isCurrentScreenTilesLoadFinish:(long long)a0;
- (struct CGPoint { double x0; double x1; } *)glPointsForTileX:(long long)a0 tileY:(long long)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (BOOL)isCurrentScreenTilesLoadFinish;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithTileOverlay:(id)a0;

@end
