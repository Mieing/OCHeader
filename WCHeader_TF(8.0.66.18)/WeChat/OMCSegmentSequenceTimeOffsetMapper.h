@class NSArray, NSMapTable, NSString;
@protocol OMCSegmentSequenceTimeOffsetMapperDataSource;

@interface OMCSegmentSequenceTimeOffsetMapper : NSObject <OMCTimelineTimeOffsetValueMapper, OMCTimelineTimeOffsetRangeMapper>

@property (nonatomic) struct XTMTimeRange { struct XTMTime { long long _periodCount; unsigned int _type; } _startValue; struct XTMTime { long long _periodCount; unsigned int _type; } _startToEndValueDifference; } backingTimeRangeBoundary;
@property (nonatomic) BOOL isSequenceEmpty;
@property (nonatomic) struct SharedPtr<XPiecewiseValueMapper<XTMTime, double, kDoubleNan>> { void *_ptr; } time2OffsetMapper;
@property (nonatomic) struct SharedPtr<XPiecewiseValueMapper<double, XTMTime, kTMInvalidTime>> { void *_ptr; } offset2TimeMapper;
@property (retain, nonatomic) NSMapTable *pointOffsetRangesByTimeRange;
@property (retain, nonatomic) NSMapTable *timeRangesByPointOffsetRange;
@property (weak, nonatomic) id<OMCSegmentSequenceTimeOffsetMapperDataSource> dataSource;
@property (readonly, nonatomic) NSArray *segmentViewMappers;
@property (readonly, nonatomic) BOOL isSequenceMapperDirty;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRangeBoundary;
@property (readonly, nonatomic) struct MCOffsetRange { double location; double length; } pixelOffsetRangeBoundary;
@property (readonly, nonatomic) struct MCOffsetRange { double location; double length; } pointOffsetRangeBoundary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForPointOffset:(double)a0;
- (double)pointOffsetForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct XTMTime { long long x0; unsigned int x1; })backingTimeForPointOffset:(double)a0;
- (double)pointOffsetForBackingTime:(const void *)a0;
- (double)pixelOffsetForBackingTimeOutOfBoundary:(const void *)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForPointOffsetRange:(struct MCOffsetRange { double x0; double x1; })a0;
- (struct MCOffsetRange { double x0; double x1; })pointOffsetRangeForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct XTMTimeRange { struct XTMTime { long long x0; unsigned int x1; } x0; struct XTMTime { long long x0; unsigned int x1; } x1; })backingTimeRangeForPointOffsetRange:(struct MCOffsetRange { double x0; double x1; })a0;
- (struct MCOffsetRange { double x0; double x1; })pointOffsetRangeForBackingTimeRange:(const void *)a0;
- (void)markSequenceMapperDirty;
- (void)rebuildIfNeeded;
- (void)rebuild;
- (void)setIsSequenceMapperDirty:(BOOL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
