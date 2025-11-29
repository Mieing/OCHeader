@class NSString, WCAudioPlayer;

@interface TingAudioPlayer : TingBizPlayer <IWCAudioPlayerExt>

@property (retain, nonatomic) WCAudioPlayer *player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)audioInfo;
- (int)playerKernelType;
- (id)view;
- (void)prepareToPlay;
- (void)play;
- (void)reset;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)seekToTime:(double)a0;
- (BOOL)canSeek;
- (double)duration;
- (double)currentTime;
- (double)displayTime;
- (double)bufferedTime;
- (void)setPlayRate:(float)a0;
- (void)setVolume:(float)a0;
- (void)wcAudioPlayer:(id)a0 onEvent:(unsigned long long)a1 audioInfo:(id)a2 error:(id)a3;
- (void)wcAudioPlayer:(id)a0 currentTime:(double)a1 displayTime:(double)a2 duration:(double)a3;
- (void).cxx_destruct;

@end
