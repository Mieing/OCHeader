@class MJTimelineViewModel, OMCSegmentSequenceTimeOffsetMapper, NSString, NSMapTable, NSMutableArray, OMJID;
@protocol MJTimelineLayoutDataSource;

@interface MJTimelineLayout : NSObject <OMCSegmentSequenceTimeOffsetMapperDataSource> {
    struct MCOffsetRange { double location; double length; } _contentYOffsetRange;
    struct MCOffsetRange { double location; double length; } _storylineYOffsetRange;
    struct map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> { struct __tree<std::__value_type<long, MCOffsetRange>, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>, std::allocator<std::__value_type<long, MCOffsetRange>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MCOffsetRange>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _audialLaneYOffsetRangeMap;
    struct map<long, MCOffsetRange, std::less<long>, std::allocator<std::pair<const long, MCOffsetRange>>> { struct __tree<std::__value_type<long, MCOffsetRange>, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>, std::allocator<std::__value_type<long, MCOffsetRange>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<long, MCOffsetRange>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<long, std::__value_type<long, MCOffsetRange>, std::less<long>>> { unsigned long long __value_; } __pair3_; } __tree_; } _visualLaneYOffsetRangeMap;
    struct set<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> { struct __tree<MCSegmentType, std::less<MCSegmentType>, std::allocator<MCSegmentType>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<MCSegmentType, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<MCSegmentType>> { unsigned long long __value_; } __pair3_; } __tree_; } _visibleSegmentTypes;
    NSMutableArray *_arrangedAudialSegments;
    NSMutableArray *_arrangedVisualSegments;
    NSMapTable *_segmentFrameMap;
    NSMapTable *_segmentMappersByID;
}

@property (nonatomic) BOOL isLayoutDirty;
@property (readonly, nonatomic) BOOL isStorylineEmpty;
@property (readonly, nonatomic) unsigned long long visualLaneCount;
@property (readonly, nonatomic) unsigned long long audialLaneCount;
@property (readonly, nonatomic) OMJID *blankMapperID;
@property (weak, nonatomic) id<MJTimelineLayoutDataSource> dataSource;
@property (readonly, nonatomic) MJTimelineViewModel *timelineVM;
@property (readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *storylineTimeOffsetMapper;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } timelineViewContentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } timelineViewContentSize;
@property (nonatomic) double storylineYOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)calcVerticalLayout;
- (void)arrangeSegments;
- (void)arrangeSegmentsOverlapEnabled;
- (void)arrangeSegmentsOverlapDisabled;
- (id)segmentViewMappersForSegmentVMs:(id)a0;
- (struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })calcWidthsForSegmentVMs:(id)a0;
- (id)initWithTimelineViewModel:(id)a0 visibleSegmentTypes:(id)a1;
- (struct MCOffsetRange { double x0; double x1; })yOffsetRangeForContent;
- (struct MCOffsetRange { double x0; double x1; })yOffsetRangeForStoryline;
- (struct MCOffsetRange { double x0; double x1; })xOffsetRangeForStoryline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithID:(id)a0;
- (void)calculateLayoutIfNeeded;
- (void)calculateLayout;
- (void)resetCache;
- (void)markLayoutDirty;
- (void)internalCalculateLayout;
- (id)segmentViewMappersForSequenceMapper:(id)a0;
- (double)timeOffsetScaleForSequenceMapper:(id)a0;
- (BOOL)shouldUseTimeOffsetScaleForSequenceMapper:(id)a0;
- (id)segmentTimeOffsetMapperForSegmentWithID:(id)a0;
- (id)internalSegmentMapperForSegmentWithID:(id)a0;
- (void)pruneSegmentMappersByIDs:(id)a0;
- (id)targetAnchoredSegmentForMovingSegmentWithID:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)targetStoryContentSegmentForMovingSegmentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calcSegmentFrames;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
