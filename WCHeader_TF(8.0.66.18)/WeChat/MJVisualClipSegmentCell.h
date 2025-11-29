@class NSString, MJTileStripView;
@protocol MJTileStripViewManager;

@interface MJVisualClipSegmentCell : MJSegmentCell <MJTileStripViewContainer>

@property (nonatomic) BOOL isSegmentInfoOverlayVisible;
@property (weak, nonatomic) id<MJTileStripViewManager> tileStripViewManager;
@property (retain, nonatomic) MJTileStripView *tileStripView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupthumbPlaceholder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)willDisplay;
- (void)didEndDisplaying;
- (void)prepareForReuse;
- (void)syncWithSegmentUIState;
- (void)syncWithMutation;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)addTileStripView:(id)a0;
- (void)addTileTileStripViewIfNeeded;
- (void)enqueueTileStripViewIfNeeded;
- (void)updateOverlay;
- (id)durationInfoOverlay;
- (id)muteInfoOverlay;
- (void).cxx_destruct;

@end
