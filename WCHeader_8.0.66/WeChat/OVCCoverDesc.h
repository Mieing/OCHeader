@interface OVCCoverDesc : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

+ (id)coverDescWithImageFilePath:(id)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)coverDescWithImageFilePath:(id)a0 contentCropRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
+ (id)coverDescWithTimelineSnapshotTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (id)initWithType:(unsigned long long)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
