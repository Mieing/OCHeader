@class NSString;
@protocol MsgAudioPlayerProtocol;

@interface AudioReceiver : MMUserService <MsgAudioPlayerDelegate, MMServiceProtocol> {
    id<MsgAudioPlayerProtocol> m_audioPlayer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generatePlayerWithAudioFormat:(unsigned int)a0;
- (unsigned int)getAudioFormatWithMsg:(id)a0 path:(id)a1;
- (void)StartPlay:(id)a0 Path:(id)a1;
- (void)StartPlay:(id)a0 Path:(id)a1 fromTime:(unsigned int)a2;
- (void)Pause;
- (void)Resume;
- (BOOL)StopPlay;
- (BOOL)isPlaying;
- (int)getCurrentTimeMs;
- (void)setProgress:(unsigned int)a0;
- (void)setPlayRate:(double)a0;
- (double)playRate;
- (void)switchToEarMode:(BOOL)a0;
- (void)setStopInBackground:(BOOL)a0;
- (void)notifyOnPlaying:(id)a0 success:(BOOL)a1;
- (void)notifyOnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void)onGetLevelMeterPeak:(float)a0 playData:(id)a1;
- (void)audioPlayerDidStartPlaying:(id)a0;
- (void)audioPlayerDidPaused:(id)a0;
- (void)audioPlayerDidStop:(id)a0;
- (void)audioPlayerDidFinishPlaying:(id)a0;
- (void)audioPlayer:(id)a0 didFailWithError:(id)a1;
- (void)onEarTip;
- (void)audioPlayer:(id)a0 didChangePeakPower:(float)a1;
- (void).cxx_destruct;

@end
