@class NSString;

@interface MMMusicVideoStaticticsReporter : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long videoFileSizeInBytes;
@property (nonatomic) double videoDurationInMs;
@property (nonatomic) double videoAverageBitrateInKbps;
@property (nonatomic) unsigned int reportId;
@property (nonatomic) long long averageNetworkSpeedInKBs;
@property (nonatomic) long long bufferCount;
@property (nonatomic) long long bufferDurationInMs;
@property (nonatomic) long long playDurationInMs;
@property (nonatomic) BOOL hitPreload;
@property (nonatomic) double startPlayTime;
@property (nonatomic) double actualPlayTime;
@property (nonatomic) int videoEpisodeIndex;
@property (nonatomic) double startFetchTrackItemTime;
@property (nonatomic) double didFetchTrackItemTime;
@property (readonly, nonatomic) BOOL isOptimizedVideoPreloadPolicy;
@property (nonatomic) int videoQualityFormat;
@property (nonatomic) BOOL isVariableBitrate;
@property (nonatomic) BOOL isLocalVideo;

- (void)fillImformationFromPlayBackInfo:(id)a0;
- (void)fillImformationFromFinderMediaInfo:(id)a0;
- (void)fillImformationFromWcplayerReporter:(id)a0;
- (id)init;
- (void)reportStaticticsWhileStopPlay;
- (void)reportWithString:(id)a0;
- (int)playStartCost;
- (id)description;
- (void).cxx_destruct;

@end
