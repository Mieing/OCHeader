@class NSMutableArray;

@interface TBTileOverlayRenderContainer : NSObject {
    NSMutableArray *_tileOverlayRenders;
}

- (id)init;
- (void)addTileOverlayView:(id)a0;
- (id)removeForTileOverlay:(id)a0;
- (id)tileOverlays;
- (BOOL)isEmpty;
- (id)tileOverlayViewWithTag:(int)a0;
- (id)viewForOverlay:(id)a0;
- (void).cxx_destruct;

@end
