@class WCTiledImageTask, NSMutableArray;

@interface WCTiledImageView : UIImageView

@property (retain, nonatomic) WCTiledImageTask *tiledImageTask;
@property (retain, nonatomic) NSMutableArray *tiledImageInfos;
@property (nonatomic) struct CGSize { double width; double height; } tileSize;

- (id)init;
- (void)dealloc;
- (void)startTileWithImageData:(id)a0;
- (void)onDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_onDisplayInRect:(id)a0;
- (void)stopDisplay;
- (void).cxx_destruct;

@end
