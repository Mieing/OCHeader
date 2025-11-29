@class NSString, HearingAidPlayer;
@protocol HearingAidVoiceChangeDelegate;

@interface HearingAidVolumeConfirmLogic : NSObject <SystemVolumeExt>

@property (retain, nonatomic) HearingAidPlayer *player;
@property (nonatomic) double lockVolume;
@property (nonatomic) double originVolume;
@property (weak, nonatomic) id<HearingAidVoiceChangeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (BOOL)playAudio:(id /* block */)a0;
- (void)autoPlayAudio;
- (BOOL)resumeAudio;
- (BOOL)pauseAudio;
- (BOOL)isPlaying;
- (void)stop;
- (void)resetLockVolume;
- (void)confirmVolume;
- (double)volumeChange:(BOOL)a0;
- (double)getCurrentVolume;
- (void)setVolume:(float)a0;
- (void)onSystemVolumeChangeFrom:(float)a0 to:(float)a1 reason:(int)a2;
- (void).cxx_destruct;

@end
