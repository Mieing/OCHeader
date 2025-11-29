@class NSArray, OMCSegmentSequenceTimeOffsetMapper;

@interface MJSnapMarksViewLayout : NSObject {
    struct vector<std::tuple<MJRulerMarkType, double, std::string>, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<MJRulerMarkType, double, std::string> *, std::allocator<std::tuple<MJRulerMarkType, double, std::string>>> { void *__value_; } __end_cap_; } _snapMarks;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } timelineVisibleRect;
@property (retain, nonatomic) NSArray *snapTimes;
@property (readonly, nonatomic) OMCSegmentSequenceTimeOffsetMapper *timelineTimeOffsetMapper;

- (id)initWithTimelineTimeOffsetMapper:(id)a0 snapTimes:(id)a1;
- (void *)snapMarks;
- (void)updateSnapMarksWithSnapTimes:(id)a0;
- (void)updateSnapMarksWithTimelineVisibleRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (BOOL)isValidTimelineVisibleRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
