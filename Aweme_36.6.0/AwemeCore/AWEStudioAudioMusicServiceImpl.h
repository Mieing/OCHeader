@class NSString;

@interface AWEStudioAudioMusicServiceImpl : NSObject <AWEStudioAudioMusicServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFadeInOutEnable:(BOOL)a0;
- (long long)playStatus;
- (id)currentPlayModel;
- (void)setMusicModels:(id)a0 current:(id)a1 queueId:(id)a2;
- (void)appendMusicModels:(id)a0;
- (void)setLoopModeDefault;
- (id)getPlayModelWithMusicModel:(id)a0 queueName:(id)a1;
- (id)lastPlayModel;
- (void)play;
- (void)pause;
- (void)clear;
- (void)addObserver:(id)a0;
- (BOOL)isPlaying;
- (void)stop;
- (void)removeObserver:(id)a0;

@end
