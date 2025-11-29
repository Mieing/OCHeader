@class DVESlice, NSArray;

@interface DVESingleAudioPointsInfo : NSObject

@property (retain, nonatomic) DVESlice *slice;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } payloadDuration;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (nonatomic) double audioSpeed;
@property (retain, nonatomic) NSArray *audioPoints;

- (void).cxx_destruct;
- (double)startSeconds;

@end
