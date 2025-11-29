@class MASConstraint, NSString, DVEMultipleTrackFoldedView;

@interface DVEMediaTimelineContentViewNew : DVEMediaTimelineContentView <DVETimelineViewServiceProtocol>

@property (retain, nonatomic) DVEMultipleTrackFoldedView *topMultipleTrackFoldedView;
@property (retain, nonatomic) DVEMultipleTrackFoldedView *bottomMultipleTrackFoldedView;
@property (retain, nonatomic) MASConstraint *topFoldedViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *bottomFoldedViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)nleEditorDidChange;
- (void)updateMultipleTrackFoldedStateView;
- (void)setupVideArea;
- (void)willStartLongPressSegmentWithView:(id)a0;
- (void)didEndLongPressSegmentWithView:(id)a0;
- (void)videoTrackPreview:(id)a0 didSelectSegment:(id)a1 clip:(BOOL)a2;
- (void)setupMultipleTrackArea;
- (void)updateMultipleTrackView:(unsigned long long)a0 hidden:(BOOL)a1;
- (void)setupMultipleTrackFoldedView;
- (void)updateMultipleTrackFoldedStateViewForceRefresh:(BOOL)a0;
- (id)typesForTopFoldedStateTrack;
- (id)colorForMTFoldedStateType:(unsigned long long)a0;
- (id)typesForBottomFoldedStateTrack;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;
- (void)addObservers;
- (void)registerServices;

@end
