@class OMCSegmentSequenceTimeOffsetMapper, __end_cap_, __end_;

@interface MJTimeRulerViewLayout : NSObject {
    struct vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<MJRulerMarkType, double, std::string> *, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> { void *__value_; } __end_cap_; } _timeRulerMarks;
}

@property (nonatomic) struct MJTimeScaleList { struct vector<MJTimeRulerScale *, std::allocator<MJTimeRulerScale *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MJTimeRulerScale *__strong *, std::allocator<MJTimeRulerScale *>> { id *__value_; } x1; } scales; long long currentIndex; } timeScaleList;
@property (readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *timelineTimeOffsetMapper;

- (id)initWithTimelineTimeOffsetMapper:(id)a0 frameRate:(float)a1;
- (void *)timeRulerMarks;
- (void)updateTimeRulerMarksWithTimelineVisibleRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)adjustTimeScaleWithSegmentMappers:(id)a0 adjustState:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
