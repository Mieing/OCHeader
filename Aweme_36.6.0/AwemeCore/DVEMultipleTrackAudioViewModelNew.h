@class NSArray, NSMutableArray, NSString;
@protocol DVECoreActionServiceProtocol;

@interface DVEMultipleTrackAudioViewModelNew : DVEMultipleTrackAudioViewModel <DVECoreActionDelegate>

@property (weak, nonatomic) id<DVECoreActionServiceProtocol> actionService;
@property (retain, nonatomic) NSMutableArray *disposeBags;
@property (retain, nonatomic) NSArray *foldedStateTimeRangeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nleEditorDidChange;
- (id)cacheDraftTracks;
- (void)clearFoldedStateTimeRangeList;
- (BOOL)hasAvailableData;
- (id)draftTracks;
- (id)buildCellViewModelFromNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)selectSegment;
- (id)targetIndexPathOfSlotId:(id)a0;
- (void)trackView:(id)a0 didSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (void)trackView:(id)a0 didDeSelectItemAtIndexPath:(id)a1 cellViewModel:(id)a2;
- (void)trackView:(id)a0 didClipChanged:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)trackView:(id)a0 didClipEnded:(unsigned long long)a1 cellViewModel:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)foldedStateTimeRangeList;
- (id)audioTrackList;
- (BOOL)shouldDealAttachablePointWithType:(unsigned long long)a0;
- (id)attachablePointsWithType:(unsigned long long)a0 selectedNode:(id)a1;
- (void)refreshViewModel;
- (id)updateSelectedSegment;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;

@end
