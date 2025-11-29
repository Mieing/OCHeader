@class OMCSegment;

@interface MJSegmentEditingStateViewModel : NSObject

@property (retain, nonatomic) OMCSegment *segment;

- (void)enterEditingStateWithSegmentVM:(id)a0;
- (void)enterEditingStateWithSegmentVM:(id)a0 previewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)leaveEditingState;
- (void)segmentLeaveEditingStateIfNeeded:(id)a0;
- (void)_leaveEditingState;
- (void).cxx_destruct;

@end
