@interface KTVAudioRouteUsageRecord : NSObject

@property (nonatomic) long long audioRoute;
@property (nonatomic) double useBeginTime;
@property (nonatomic) double sumUsageDuration;

- (id)initWithAudioRoute:(long long)a0;
- (void)onSongPlayingChanged:(BOOL)a0;
- (unsigned int)getSumUsageDurationUntilCurrent;
- (id)description;

@end
