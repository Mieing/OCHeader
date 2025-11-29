@class NSArray, DVEMultipleTrackPanelTracker;
@protocol DVECoreAudioProtocol;

@interface DVEMultipleTrackAudioViewModel : DVEMultipleTrackViewModel

@property (copy, nonatomic) NSArray *cachedTracks;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (nonatomic) BOOL shouldHandleSelect;
@property (retain, nonatomic) DVEMultipleTrackPanelTracker *tracker;

- (void)updateCellViewModel:(id)a0 timeSpaceNode:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)hasAvailableData;
- (id)draftTracks;
- (id)buildCellViewModelFromNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)registerCellClassesDic;
- (id)cellIdentifierAtIndexPath:(id)a0;
- (id)buildCellFor:(id)a0;
- (id)selectSegment;
- (void)trackView:(id)a0 didSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (void)trackView:(id)a0 didDeSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackView:(id)a0 shouldClipChangedRect:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)trackView:(id)a0 didClipEnded:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (long long)maxTargetSection;
- (void)trackView:(id)a0 didMoveChanged:(id)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 hasNoIntersection:(BOOL)a4;
- (void)trackView:(id)a0 didMoveEnded:(id)a1 targetSection:(long long)a2 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 isNewInsert:(BOOL)a4;
- (BOOL)trackView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)trackView:(id)a0 shouldSelectItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)trackViewTailInsertTipBackgroundColorOf:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObservers;

@end
