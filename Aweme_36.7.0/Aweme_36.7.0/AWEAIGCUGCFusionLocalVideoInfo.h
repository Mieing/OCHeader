@class NSString, AVAsset;

@interface AWEAIGCUGCFusionLocalVideoInfo : NSObject

@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void).cxx_destruct;

@end
