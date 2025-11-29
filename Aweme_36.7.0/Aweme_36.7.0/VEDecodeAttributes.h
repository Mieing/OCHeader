@interface VEDecodeAttributes : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } dts;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double begin;
@property (nonatomic) BOOL isDecoding;
@property (nonatomic) long long sampleFlag;
@property (nonatomic) BOOL packetFlagDiscard;

@end
