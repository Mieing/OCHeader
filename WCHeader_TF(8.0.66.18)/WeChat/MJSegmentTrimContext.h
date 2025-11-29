@class OMCSegmentTimeOffsetMapper, MJElementSegmentViewModel, MJStorylineViewModel, NSMutableArray;
@protocol OMCTimelineTimeOffsetRangeMapper, OMCTimelineTimeOffsetValueMapper;

@interface MJSegmentTrimContext : NSObject {
    struct map<CMTime, MJTrimSnapInfo *, CMTimeComparator, std::allocator<std::pair<const CMTime, MJTrimSnapInfo *>>> { struct __tree<std::__value_type<CMTime, MJTrimSnapInfo *>, std::__map_value_compare<CMTime, std::__value_type<CMTime, MJTrimSnapInfo *>, CMTimeComparator>, std::allocator<std::__value_type<CMTime, MJTrimSnapInfo *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CMTime, MJTrimSnapInfo *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<CMTime, std::__value_type<CMTime, MJTrimSnapInfo *>, CMTimeComparator>> { unsigned long long __value_; } __pair3_; } __tree_; } _snapInfos;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _originalTimeRange;
    struct MCOffsetRange { double location; double length; } _originalOffsetRange;
}

@property (readonly, nonatomic) MJStorylineViewModel *storylineVM;
@property (readonly, nonatomic) MJElementSegmentViewModel *trimmingSegmentVM;
@property (readonly, nonatomic) unsigned long long trimmingEdge;
@property (readonly, nonatomic) id<OMCTimelineTimeOffsetValueMapper, OMCTimelineTimeOffsetRangeMapper> timeOffsetMapper;
@property (readonly, nonatomic) OMCSegmentTimeOffsetMapper *trimmingSegmentTimeOffsetMapper;
@property (readonly, nonatomic) BOOL shouldSnapToVisualAnchoredSegments;
@property (readonly, nonatomic) NSMutableArray *anchoredSegmentSnapTimes;
@property (nonatomic) double snapDistance;

- (id)initWithStorylineVM:(id)a0 segmentVM:(id)a1 timeOffsetMapper:(id)a2 segmentTimeOffsetMapper:(id)a3 shouldSnapToVisualAnchoredSegments:(BOOL)a4;
- (id)snapInfoForTargetOffset:(double)a0;
- (id)snapInfoWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
