@interface SilkAudioPlayer : BaseAudioPlayer {
    double m_smapleRate;
}

@property (nonatomic) BOOL isNeedUnmuteLongVideoPlay;
@property (nonatomic) unsigned long long launchTime;
@property (nonatomic) unsigned long long launchCost;
@property (nonatomic) unsigned long long receiveHandleOutputCost;

+ (unsigned int)calculateVoiceTime:(id)a0;

- (id)init;
- (void)dealloc;
- (BOOL)preparePlayNotNotify;
- (BOOL)preparePlayWithFile:(id)a0 sync:(BOOL)a1;
- (void)setCurrentPacketWithTime:(unsigned int)a0;
- (void)playAtTime:(unsigned int)a0;
- (void)setProgress:(unsigned int)a0;
- (void)replay;
- (int)getCurrentTimeMs;
- (void)stop;
- (void)autostop;
- (void)onReceiveHandleOutput;
- (void)updateStatus;
- (float)TimerCheckMeter;
- (void)checkQueueState:(float)a0;
- (void)openSilkFile:(id)a0;
- (void)setDataFormat;
- (void)setSmapleRate:(double)a0;
- (void)prepareBuffers;
- (BOOL)ifSilkAudioPlayerAgcOn;

@end
