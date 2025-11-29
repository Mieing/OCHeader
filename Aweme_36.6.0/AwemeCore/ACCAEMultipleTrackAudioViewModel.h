@class NSArray, ACCAECombinedAudioTrackModel, DVEMultipleTrackPanelTracker, NSString, AEKExtraAETrackModelDiff, AEKExtraAETrackModel;
@protocol AEKMegaEditor, DVEEditingRuntimeProtocol, ACCAETrackEditor, DVEMulitpleTrackViewServiceProtocol, DVECoreAudioProtocol;

@interface ACCAEMultipleTrackAudioViewModel : DVEMultipleTrackViewModel <AEKDiffChangeSubscriber>

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<ACCAETrackEditor> trackEditor;
@property (weak, nonatomic) id<DVEEditingRuntimeProtocol> mediaContext;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (weak, nonatomic) id<DVECoreAudioProtocol> audioEditor;
@property (copy, nonatomic) NSArray *cachedTracks;
@property (retain, nonatomic) AEKExtraAETrackModel *audioTrackModel;
@property (retain, nonatomic) AEKExtraAETrackModelDiff *diff;
@property (retain, nonatomic) ACCAECombinedAudioTrackModel *combinedTrackModel;
@property (retain, nonatomic) NSArray *foldedStateTimeRangeArray;
@property (nonatomic) BOOL shouldHandleSelect;
@property (nonatomic) BOOL shouldKeepAddMusicPlaceholderTrack;
@property (retain, nonatomic) DVEMultipleTrackPanelTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)diffResults:(id)a0 fromSource:(unsigned long long)a1;
- (id)cacheDraftTracks;
- (id)uiMultipleTrackDiff:(id)a0 with:(id)a1;
- (void)clearFoldedStateTimeRangeList;
- (void)updateCellViewModel:(id)a0 timeSpaceNode:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })availableInsertTimeRangeWithMovingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 longPressIndexPath:(id)a1 inSection:(long long)a2 tapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (BOOL)hasAvailableData;
- (id)draftTracks;
- (void)recalculateUITrackData;
- (id)buildCellViewModelFromNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)registerCellClassesDic;
- (id)cellIdentifierAtIndexPath:(id)a0;
- (id)buildCellFor:(id)a0;
- (id)selectSegment;
- (id)targetIndexPathOfSlotId:(id)a0;
- (void)trackView:(id)a0 didSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (void)trackView:(id)a0 didDeSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackView:(id)a0 shouldClipChangedRect:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)trackView:(id)a0 didClipChanged:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)trackView:(id)a0 didClipEnded:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (long long)maxTargetSection;
- (void)trackView:(id)a0 didMoveChanged:(id)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 hasNoIntersection:(BOOL)a4;
- (void)trackView:(id)a0 didMoveEnded:(id)a1 targetSection:(long long)a2 targetTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 isNewInsert:(BOOL)a4;
- (id)foldedStateTimeRangeList;
- (id)audioTrackList;
- (BOOL)shouldKeepAddMusicTrack;
- (void)updateCombinedAudioTrackModel;
- (BOOL)shouldShowCombinedAudioTrack;
- (id)buildCellViewModelsWithTrackUIModels:(id)a0;
- (id)trimDoneMessageWithSlot:(id)a0;
- (BOOL)isAudioTracksOverlap;
- (BOOL)hasMusicTrack;
- (BOOL)trackView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)trackView:(id)a0 shouldSelectItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldDealAttachablePointWithType:(unsigned long long)a0;
- (id)attachablePointsWithType:(unsigned long long)a0 selectedNode:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObservers;

@end
