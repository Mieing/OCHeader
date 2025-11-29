@class VEVideoConfig, IESTrackInfo, VEVideoReader;

@interface VEVideoClip : NSObject

@property (retain, nonatomic) VEVideoConfig *config;
@property (retain, nonatomic) IESTrackInfo *trackInfo;
@property (retain, nonatomic) VEVideoReader *reader;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } seekTime;
@property (nonatomic) int distance;
@property (nonatomic) BOOL isBiggerThan4K;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
