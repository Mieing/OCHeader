@class OMCElementSegment, OMCContentDescSegment;
@protocol OMCLayerSpatialAdjustable;

@interface MJElementSegmentViewModel : MJSegmentViewModel {
    OMCElementSegment *_elementSegment;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _trimmingOriginalDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastTrimmingDeltaTime;
}

@property (nonatomic) BOOL isTrimming;
@property (retain, nonatomic) id<OMCLayerSpatialAdjustable> layerSpatialAdjustable;
@property (readonly, nonatomic) unsigned long long trimmingEdge;
@property (readonly, nonatomic) unsigned long long trimmingBehavior;
@property (nonatomic) double trimmingDeltaWidth;
@property (nonatomic) BOOL isTransInOverlapped;
@property (nonatomic) BOOL isTransOutOverlapped;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } transInDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } transOutDuration;
@property (readonly, nonatomic) BOOL isHeadExpandable;
@property (readonly, nonatomic) BOOL isTailExpandable;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } headExpandableDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } tailExpandableDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } totalDurationIncludingExpandable;
@property (readonly, nonatomic) BOOL isHeadCompressible;
@property (readonly, nonatomic) BOOL isTailCompressible;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } headCompressibleDuration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } tailCompressibleDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } contentTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } contentOriginalDuration;
@property (readonly, nonatomic) BOOL hasContentDescSegment;
@property (readonly, nonatomic) OMCContentDescSegment *contentDescSegment;

- (id)initWithElementSegment:(id)a0;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithElementSegmentImpl;
- (BOOL)isCuttableAtPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isContentRangeAdjustableCurrently;
- (void)beginTrimmingWithEdge:(unsigned long long)a0;
- (BOOL)applyTrimmingWithDeltaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)applyTrimmingWithSnapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)trimLeadingEdgeWithDeltaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)trimTrailingEdgeWithDeltaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)trimLeadingEdgeWithSnapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)trimTrailingEdgeWithSnapTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)endTrimming;
- (BOOL)canContinueTrimming;
- (BOOL)setDurationByChangingStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)setDurationByChangingEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)setStartTimeKeepingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)expandHeadToOrigin;
- (void)expandTailToOrigin;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })mapToAbsoluteTimeFromDeltaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)description;
- (void).cxx_destruct;

@end
