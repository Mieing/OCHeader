@class NSString;

@interface OMCSegmentTimeOffsetMapper : NSObject <OMCTimelineTimeOffsetValueMapper>

@property (readonly, nonatomic) struct XTMTimeRange { struct XTMTime { long long _periodCount; unsigned int _type; } _startValue; struct XTMTime { long long _periodCount; unsigned int _type; } _startToEndValueDifference; } backingTimeRange;
@property (readonly, nonatomic) struct SharedPtr<XLinearValueMapper<XTMTime, double>> { void *_ptr; } time2OffsetMapper;
@property (readonly, nonatomic) struct SharedPtr<XLinearValueMapper<double, XTMTime>> { void *_ptr; } offset2TimeMapper;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct MCOffsetRange { double location; double length; } pixelOffsetRange;
@property (readonly, nonatomic) struct MCOffsetRange { double location; double length; } pointOffsetRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)rebuildWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 pointOffsetRange:(struct MCOffsetRange { double x0; double x1; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeForPointOffset:(double)a0;
- (double)pointOffsetForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })deltaTimeForDeltaPointOffset:(double)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
