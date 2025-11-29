@interface OVCTimelineSnapshotCoverDesc : OVCCoverDesc

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } snapshotTime;

- (id)initWithSnapshotTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
