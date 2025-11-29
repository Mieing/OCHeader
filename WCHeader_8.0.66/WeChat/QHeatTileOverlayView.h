@class QHeatTileOverlay;

@interface QHeatTileOverlayView : QTileOverlayView

@property (readonly, nonatomic) QHeatTileOverlay *tileOverlay;

- (id)initWithTileOverlay:(id)a0;
- (void)reloadData;

@end
