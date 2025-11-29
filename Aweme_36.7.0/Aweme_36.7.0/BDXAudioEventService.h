@class BDXAudioService, NSString, BDXAudioModel;

@interface BDXAudioEventService : NSObject <BDXAudioEventServiceDelegate, AWEAudioFocusProtocol>

@property (nonatomic) double eventSingleDuration;
@property (nonatomic) double eventTotalDuration;
@property (nonatomic) BOOL eventProgressBarMove;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) BOOL eventIsLyricMove;
@property (nonatomic) double eventStarTime;
@property (nonatomic) double firstSeekTime;
@property (retain, nonatomic) BDXAudioModel *currentModel;
@property (retain, nonatomic) BDXAudioService *playService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)audioIsPlaying;
- (void)audioPause;
- (void)receiveNotes:(id)a0;
- (void)calculateSingleDuration:(BOOL)a0;
- (void)audioOver:(long long)a0;
- (void)audioFinish;
- (void)eventClear;
- (void)audioPlay:(long long)a0;
- (void)audioService:(id)a0 didFinishedWithError:(id)a1;
- (void)audioService:(id)a0 playStatusChanged:(long long)a1;
- (void)audioServiceReadyToPlay:(id)a0;
- (void)audioServiceDidPlay:(id)a0;
- (void)audioServiceDidPause:(id)a0 pauseType:(long long)a1;
- (void)audioServiceDidStop:(id)a0;
- (void)audioServiceDidSeek:(id)a0;
- (void)audioServiceInPlaying:(id)a0;
- (void)audioServiceAudioChanged:(id)a0;
- (void)audioServicePeriodicTimeObserverForInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupNotifications;

@end
