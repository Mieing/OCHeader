@protocol IESSCRenderStageDelegate;

@interface IESSCRenderStage : NSObject

@property (nonatomic) BOOL currentInRenderTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } currentTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } toleranceTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeTolerance;
@property (weak, nonatomic) id<IESSCRenderStageDelegate> delegate;

- (void)updateRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 timelineTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void).cxx_destruct;
- (id)init;

@end
