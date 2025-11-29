@interface MMFinderLiveLocalAudioModeTimeRecorder : NSObject

@property (nonatomic) unsigned long long totalTime;
@property (nonatomic) unsigned long long minimizeModeTime;
@property (nonatomic) unsigned long long backgroundTime;
@property (nonatomic) BOOL isAudienceLocalAudioMode;
@property (nonatomic) unsigned long long localAudioModeStartTime;
@property (nonatomic) unsigned long long minimizeModeStartTime;
@property (nonatomic) unsigned long long backgroundStartTime;
@property (readonly, nonatomic) unsigned long long liveRoomTime;

- (id)init;
- (void)dealloc;
- (void)onApplicationDidEnterBackground;
- (void)onApplicationWillEnterForeground;
- (void)updateIsAudienceLocalAudioMode:(BOOL)a0;
- (void)resetTimeValuesWithCurrentTime:(unsigned long long)a0;
- (void)calculateAndClearTimeValuesWithCurrentTime:(unsigned long long)a0;
- (void)notifyBackgroundStateChangedTo:(BOOL)a0;
- (void)notifyMinimizeModeChangedTo:(BOOL)a0;
- (void)checkAndUpdateTimeValues;

@end
