@class CXCallObserver, NSString;

@interface SysCallCheck : MMRootService <CXCallObserverDelegate, MMServiceProtocol, JSEventExt>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (nonatomic) BOOL mIsNeedRestartAudioTalk;
@property (nonatomic) BOOL mIsInterrupting;
@property (nonatomic) BOOL mIsNeedResumeWXMusic;
@property (nonatomic) BOOL mIsNeedResumeFinderMinimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appBecomeActive;
- (void)startCheck;
- (void)stopCheck;
- (BOOL)isPhoneCalling;
- (BOOL)isPhoneCallingWithID:(id)a0;
- (BOOL)isInterrupting;
- (void)clearInterruptStatus;
- (void)onServiceClearData;
- (void)jsAudioStateChanged:(id)a0;
- (void)jsVideoStateChanged:(id)a0;
- (void)onMediaPlayStateChange:(id)a0;
- (void)playBegin;
- (void)playEnd;
- (void)pauseTalk;
- (void)restartTalk;
- (void)delayRestartTalk;
- (void)onSilenceSecondaryAudioHint:(id)a0;
- (void)audioSessionInterruption:(id)a0;
- (void)beginInterruption;
- (void)endInterruption;
- (void)mediaServiceFail:(id)a0;
- (void)mediaServiceReset:(id)a0;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)callBegin;
- (void)callEnd;
- (void)switchAudioRoute;
- (int)callStateFromCall:(id)a0;
- (void).cxx_destruct;

@end
