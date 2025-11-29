@interface IESDurationInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } start;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;

@end
