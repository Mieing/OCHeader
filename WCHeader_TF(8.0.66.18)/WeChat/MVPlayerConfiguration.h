@class MVPlayerTimeRange;

@interface MVPlayerConfiguration : NSObject

@property (nonatomic) long long initailTimeInSeconds;
@property (nonatomic) unsigned long long actionAfterDurationAvailable;
@property (nonatomic) BOOL shouldShowAlbumImage;
@property (nonatomic) BOOL resetWhileEpisodeIndexChanged;
@property (retain, nonatomic) MVPlayerTimeRange *loopTimeRange;
@property (nonatomic) double initalTime;
@property (nonatomic) unsigned long long minimizationWindowUIStyle;

- (id)init;
- (void).cxx_destruct;

@end
