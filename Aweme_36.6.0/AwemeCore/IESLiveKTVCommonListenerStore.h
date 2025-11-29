@class IESLiveGCDTimer, IESLiveKTVSEIModel, NSNumber, NSMutableArray;

@interface IESLiveKTVCommonListenerStore : NSObject

@property (retain, nonatomic) NSNumber *currentPlayingMusicID;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double seiPlayingTime;
@property (nonatomic) double seiPlayingTimeTS;
@property (nonatomic) double seiPlayingTimeOffset;
@property (nonatomic) BOOL isInSameMusic;
@property (retain, nonatomic) NSMutableArray *seiTimeArray;
@property (retain, nonatomic) NSMutableArray *localTimeArray;
@property (retain, nonatomic) IESLiveKTVSEIModel *lastSeiModel;
@property (nonatomic) BOOL isAnchorEnterBackground;
@property (nonatomic) double timerInterval;
@property (nonatomic) BOOL liveKtvNoPlayStatusEnable;
@property (nonatomic) BOOL isTimerSuspend;
@property (nonatomic) double currentPlayingTime;
@property (nonatomic) double curPlayingTime;
@property (nonatomic) double playMusicStart;

- (void)updateListenerPlayingTimeWithSEIModel:(id)a0;
- (BOOL)pr_isTimerExisted;
- (void)handleAudienceSyncMusicStatus:(id)a0;
- (void)handleEnterKTV:(id)a0;
- (void)handleAudienceLyricStart:(id)a0;
- (void)audiencePauseAudienceTimer:(id)a0;
- (void)audienceResumeAudienceTimer:(id)a0;
- (void)finishedMusicWithID:(id)a0 force:(BOOL)a1;
- (void)handleMoreLyrics:(id)a0;
- (void)startMusicForTrack:(id)a0;
- (void)updatePlayingTime;
- (void)updateSeiTime:(id)a0;
- (void)endMusicForTrack:(id)a0;
- (void)cleanTime;
- (void)recordTimeForTrack;
- (void)endTimeTrack;
- (void)audiencePauseIsAnchorOut;
- (void)audienceResumeIsAnchorIn;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
