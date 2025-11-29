@class CMessageWrap;

@interface PlayingController : MMObject <ISysCallCheckExt, IAudioReceiverExt> {
    BOOL m_bPlaying;
    unsigned int m_uiMesLocalID;
    CMessageWrap *m_msgWrap;
}

- (id)init;
- (void)Register;
- (void)UnRegister;
- (BOOL)isPlaying;
- (id)currentPlayingMsg;
- (void)StartPlayMessage:(id)a0;
- (void)StartPlayMessage:(id)a0 fromTime:(unsigned int)a1;
- (void)SeekVoiceMsg:(id)a0 toTime:(unsigned int)a1;
- (void)setPlayRate:(double)a0;
- (double)playRate;
- (void)switchToEarMode:(BOOL)a0;
- (void)StopPlayMessage:(id)a0;
- (void)StopPlayMessage:(id)a0 reason:(int)a1 subReason:(int)a2;
- (void)onResignActive;
- (void)OnSysCallState:(int)a0 andCallId:(id)a1;
- (void)reportStopVoice:(int)a0;
- (void)reportStopVoice:(int)a0 subReason:(int)a1;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void)OnBeginPlaying:(id)a0 success:(BOOL)a1;
- (void)OnEarTip;
- (void)Reset;
- (void)dealloc;
- (void).cxx_destruct;

@end
