@class MJTimelineViewModel, OMCSegmentSequenceTimeOffsetMapper, NSString, UIScrollView, MJTimelineLayout;

@interface MJTimelineLayoutCalculator : NSObject <MJTimelineLayoutDataSource>

@property (readonly, nonatomic) MJTimelineLayout *backingLayout;
@property (readonly, nonatomic) MJTimelineViewModel *timelineVM;
@property (weak, nonatomic) UIScrollView *timelineView;
@property (readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *storylineTimeOffsetMapper;
@property (readonly, nonatomic) BOOL isLayoutDirty;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } timelineViewContentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } timelineViewContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reusableAttributesForSegmentVM:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct pair<std::vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>, std::vector<MJTileReusableAttributes *>> { struct vector<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *> *, std::allocator<std::pair<MJTileReusableAttributes *, MJTileReusableAttributes *>>> { void *x0; } x2; } x0; struct vector<MJTileReusableAttributes *, std::allocator<MJTileReusableAttributes *>> { id *x0; id *x1; struct __compressed_pair<MJTileReusableAttributes *__strong *, std::allocator<MJTileReusableAttributes *>> { id *x0; } x2; } x1; })reusableAttributesForSegmentVM:(id)a0 withShiftingOffset:(double)a1 originalAttributes:(id)a2 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithTimelineVM:(id)a0 visibleSegmentTypes:(id)a1;
- (void)dealloc;
- (struct MCOffsetRange { double x0; double x1; })yOffsetRangeForContent;
- (struct MCOffsetRange { double x0; double x1; })yOffsetRangeForStoryline;
- (struct MCOffsetRange { double x0; double x1; })xOffsetRangeForStoryline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithID:(id)a0;
- (void)markLayoutDirty;
- (void)calculateLayout;
- (void)calculateLayoutIfNeeded;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)a0;
- (unsigned int)waveformSampleCountForSegmentWithID:(id)a0;
- (BOOL)shouldHideSegmentWithID:(id)a0;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)timeOffsetScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })timelineViewBounds;
- (void)syncWithMutationInfo:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;

@end
