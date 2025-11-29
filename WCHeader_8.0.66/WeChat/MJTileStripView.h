@class CALayer, NSMapTable, NSOrderedSet;
@protocol OMCThumbnailProvider, MJReusableTileLayersManager, MJTileStripViewDelegate;

@interface MJTileStripView : UIView {
    BOOL _doneFirstLayout;
}

@property (readonly, nonatomic) CALayer *contentLayer;
@property (retain, nonatomic) NSMapTable *tileLayersByAttrs;
@property (readonly, nonatomic) NSOrderedSet *activeTileAttributesSet;
@property (weak, nonatomic) id<MJReusableTileLayersManager> reusableTileManager;
@property (weak, nonatomic) id<MJTileStripViewDelegate> delegate;
@property (retain, nonatomic) id<OMCThumbnailProvider> thumbnailProvider;

- (id)initWithThumbnailProvider:(id)a0 reusableTileManager:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (void)layoutSubviews;
- (void)recycleTilesWithAttributesSet:(id)a0;
- (void)recycleTilesWithAttributesSet:(id)a0 forceUpdate:(BOOL)a1;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)a0 forceUpdate:(BOOL)a1;
- (void)recycleTilesWithShiftingAttributes:(struct vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *> *, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> { void *x0; } x2; })a0 appendingTileAttributes:(struct vector<MJTileReusableAttributes *, std::allocator<MJTileReusableAttributes *>> { id *x0; id *x1; struct __compressed_pair<MJTileReusableAttributes *__strong *, std::allocator<MJTileReusableAttributes *>> { id *x0; } x2; })a1;
- (void)recycleTileLayersWithActiveTileAttributesSet:(id)a0 animationDuration:(double)a1;
- (id)internalDequeueTileLayerWithAttributes:(id)a0;
- (void)addTileLayer:(id)a0 withAttributes:(id)a1;
- (void)flushTileLayerThumbnail:(id)a0;
- (void).cxx_destruct;

@end
