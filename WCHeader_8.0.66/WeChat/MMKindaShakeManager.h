@class AVAudioPlayer, NSString, MMVoidCallback, CShakeChecker;

@interface MMKindaShakeManager : NSObject <ShakeCheckerDelegate, MMIShakeCheckingManager>

@property (retain, nonatomic) CShakeChecker *shakeChecker;
@property (retain, nonatomic) MMVoidCallback *onShakeCallback;
@property (retain, nonatomic) MMVoidCallback *m_onDelayNotifyCallback;
@property (nonatomic) int m_delayMs;
@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startCheck;
- (void)stopCheck;
- (void)setOnShakeCallBackImpl:(id)a0;
- (void)setDelayNotifyCallBackImpl:(id)a0 delayMs:(int)a1;
- (void)OnShake;
- (void)playShakeSound;
- (void)playShakeMatch:(BOOL)a0;
- (void)doDelayNotifyCallback;
- (void)playSound:(id)a0 type:(id)a1;
- (void)setAudioSessionConfig;
- (void).cxx_destruct;

@end
