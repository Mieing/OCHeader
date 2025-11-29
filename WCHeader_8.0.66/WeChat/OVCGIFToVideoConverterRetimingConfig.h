@interface OVCGIFToVideoConverterRetimingConfig : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationDuration;
@property (nonatomic) unsigned long long loopCount;

- (id)initWithPresentationDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 loopCount:(unsigned long long)a1;

@end
