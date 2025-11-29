@class BDPAudioModel, NSString, TTVideoEngine, BDPUniqueID;
@protocol BDPAudioPlayerStateDelegate;

@interface BDPEncryptedAudioPlayer : NSObject <TTVideoEngineDelegate, BDPCrossTalkComponentDelegate, BDPAudioPlayerProtocol>

@property (retain, nonatomic) TTVideoEngine *player;
@property (retain, nonatomic) BDPAudioModel *model;
@property (nonatomic) BOOL wasPlaying;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL changingSrc;
@property (nonatomic) BOOL isStoppedByEnd;
@property (nonatomic) double seekStartTimeBeforePlayed;
@property (nonatomic) BOOL initialFlag;
@property (nonatomic) long long initialTime;
@property (nonatomic) BOOL hasStuck;
@property (nonatomic) BOOL inStuck;
@property (nonatomic) long long stuckStartTime;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long audioID;
@property (nonatomic) BOOL isInterruption;
@property (weak, nonatomic) id<BDPAudioPlayerStateDelegate> delegate;
@property (copy, nonatomic) NSString *audioShareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double buffered;
@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL ended;
@property (readonly, nonatomic) BOOL playing;

- (void)setAudioModel:(id)a0;
- (void)videoEngineUserStopped:(id)a0;
- (void)videoEngine:(id)a0 playbackStateDidChanged:(long long)a1;
- (void)videoEngine:(id)a0 loadStateDidChanged:(unsigned long long)a1;
- (void)videoEngineDidFinish:(id)a0 error:(id)a1;
- (void)videoEngineDidFinish:(id)a0 videoStatusException:(long long)a1;
- (void)videoEngineCloseAysncFinish:(id)a0;
- (void)videoEnginePrepared:(id)a0;
- (id)commonTrackParams;
- (void)seek:(double)a0 completion:(id /* block */)a1;
- (void)setupObserver;
- (long long)currentActionType;
- (id)currentUniqueID;
- (id)getAudioModel;
- (void)initialEndAction:(id)a0 status:(id)a1;
- (void)p_stateChange:(id)a0 data:(id)a1;
- (void)trackAudioEvent:(id)a0 extra:(id)a1;
- (void)playDirectly;
- (void)pauseDirectly;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (void)stopDirectly;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (id)init;
- (BOOL)stop;
- (void)dealloc;
- (void)dismiss:(id /* block */)a0;
- (id)shareMode;
- (void)initialAction;

@end
