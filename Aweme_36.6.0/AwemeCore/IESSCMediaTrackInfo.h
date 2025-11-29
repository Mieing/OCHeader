@class AVAssetTrack;

@interface IESSCMediaTrackInfo : NSObject

@property (retain, nonatomic) AVAssetTrack *track;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } selectedTimeRange;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } scaleToDuration;
@property (nonatomic) BOOL useEmpty;

- (void).cxx_destruct;

@end
