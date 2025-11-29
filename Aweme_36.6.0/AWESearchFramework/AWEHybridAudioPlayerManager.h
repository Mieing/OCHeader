@class NSString, NSDictionary, AWEMusicPlayerModel, AWEMusicFeedViewModel, NSMutableArray;
@protocol AWEMusicStreamingPlayEventService, MusicService;

@interface AWEHybridAudioPlayerManager : NSObject <AWEMusicServiceDelegate>

@property (nonatomic) double playTime;
@property (retain, nonatomic) AWEMusicFeedViewModel *playModel;
@property (retain, nonatomic) NSDictionary *hybridExtraInfo;
@property (retain, nonatomic) id<MusicService> musicService;
@property (retain, nonatomic) id<AWEMusicStreamingPlayEventService> eventService;
@property (nonatomic) BOOL enableClientMusicLog;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL supportBackground;
@property (nonatomic) long long playStatus;
@property (retain, nonatomic) AWEMusicPlayerModel *currentPlayModel;
@property (retain, nonatomic) NSMutableArray *playObservers;
@property (nonatomic) BOOL playerSharing;
@property (readonly, copy, nonatomic) NSString *currentMusicID;
@property (nonatomic) BOOL notNeedPlayTimeTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)playModelWithBridgeParams:(id)a0;
+ (id)manager;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)musicServiceDidSeek:(id)a0;
- (void)musicServiceInPlaying:(id)a0;
- (void)musicServiceMusicChanged:(id)a0;
- (long long)currentPlayTime;
- (id)latestPlayingMusicExtra;
- (void)musicDidChangeFavoriteStatus:(id)a0;
- (void)callPlayMusicStartEventWithPlayModel:(id)a0;
- (BOOL)playMusicWithPlayModel:(id)a0 startTime:(double)a1 withExtra:(id)a2;
- (BOOL)playMusicWithPlayModel:(id)a0 startTime:(double)a1 eventReport:(BOOL)a2 withExtra:(id)a3;
- (BOOL)playMusicWithPlayModel:(id)a0 startTime:(double)a1 eventReport:(BOOL)a2 withExtra:(id)a3 logExtra:(id)a4;
- (void)callPlayMusicEndEventWithPlayModel:(id)a0;
- (void)callPlayMusicStopEventWithPlayModel:(id)a0;
- (void)callPlayMusicPlaybackTimeEventWithService:(id)a0;
- (void)notifyObverserPlayStatusChanged:(long long)a0;
- (void)notifyObserverPlaybackTimeChanged:(double)a0;
- (BOOL)isSameMusic:(id)a0 withPlayModel:(id)a1;
- (BOOL)playMusicWithPlayModel:(id)a0 withExtra:(id)a1;
- (void)addHybridAudioPlayerObserver:(id)a0;
- (void)removeHybrigAudioPlayerObserver:(id)a0;
- (BOOL)isPlayingSamePlayModel:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)didEnterBackground;
- (id)init;
- (void)stop;
- (void)dealloc;
- (void)didPlayVideo;
- (void)resetPlayer;
- (void)seekToTime:(double)a0 completion:(id /* block */)a1;

@end
