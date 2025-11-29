@interface AWETimingCloseOnPlayAndMonitorHandler : AWEOnPlayAndMonitorBaseHandler

@property (nonatomic) BOOL needShowAlert;
@property (nonatomic) BOOL isEnterBackground;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (void)onApplicationWillEnterForeground;
- (void)onApplicationDidEnterBackground;
- (BOOL)isTimingClosePlayCurrentEnable;
- (void)resetTimingCloseIfNeeded;
- (void)handleTimingClosePlayCurrentIfNeededWithPlaybackAction:(long long)a0;
- (void)realOnPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1 context:(id)a2;
- (BOOL)isTimingCloseEnable;
- (void)onBackgroundPlay;
- (id)initWithPlayerController:(id)a0;

@end
