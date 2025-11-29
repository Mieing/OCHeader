@class UIImage, WCFinderMinimizePlayInfo, NSString;
@protocol WCFinderMinimizePlayCtrlPlayNotifyExtDelegate, WCFinderMinimizePlayCtrlPlayDelegate;

@interface WCFinderMinimizePlayCtrl : NSObject <WCFinderMinimizeContentViewDelegate, WCAudioModuleDelegate>

@property (retain, nonatomic) UIImage *coverImage;
@property (nonatomic) long long statusMask;
@property (nonatomic) BOOL lastRequestToPlay;
@property (nonatomic) BOOL isMakeAudioModule;
@property (weak, nonatomic) id<WCFinderMinimizePlayCtrlPlayDelegate> controlDelegate;
@property (weak, nonatomic) id<WCFinderMinimizePlayCtrlPlayNotifyExtDelegate> extDelegate;
@property (readonly, nonatomic) BOOL isMinimizePlaying;
@property (nonatomic) BOOL isFloatingViewHidden;
@property (nonatomic) BOOL isPlayerDidPlay;
@property (retain, nonatomic) WCFinderMinimizePlayInfo *playInfo;
@property (nonatomic) long long state;
@property (readonly, nonatomic) BOOL playCtrlBtnIsPlaying;
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) BOOL isInterruptWhenStartup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanControlCenter;
+ (void)setupRemoteButton:(id)a0 enable:(BOOL)a1 target:(id)a2 action:(SEL)a3;

- (void)dealloc;
- (BOOL)isMinimizing;
- (BOOL)needCleanPauseStateWhenEnterStream;
- (double)queryCurrentPlayPosition;
- (void)configPIPActive:(BOOL)a0;
- (void)play;
- (void)playNotifyOutterMute:(BOOL)a0 showForbidenToast:(BOOL)a1;
- (void)pause;
- (void)pauseByInterrupt:(BOOL)a0 playToEnd:(BOOL)a1 releaseAudio:(BOOL)a2;
- (void)onEnterOtherMediaPage;
- (void)onExitOtherMediaPage;
- (BOOL)isEnterOtherMediaPage;
- (void)onOutterInterrupt;
- (void)onOutterResume;
- (void)pauseWithFlag:(long long)a0;
- (BOOL)resumePlayCheckFlag:(long long)a0;
- (void)showToast;
- (void)updatePlayerStatus:(BOOL)a0;
- (void)pauseForSystemCall;
- (void)resumeForSystemCall;
- (void)setupControlCenter;
- (void)updateControlCenterInfo;
- (long long)onPlayAction:(id)a0;
- (long long)onPauseAction:(id)a0;
- (void)updatePlayInfo:(id)a0;
- (void)keepHandlePlayer;
- (void)afterDoMinimize;
- (void)onMinimizePlayViewDidPlay;
- (void)onMinimizePlayViewDidPause;
- (void)onMinimizePlayViewDidPlayToEnd;
- (BOOL)minimizePlayViewNeedSeekBegin;
- (void)onMinimizePlayViewImageDidUpdate:(id)a0;
- (void)onMinimizePlayViewDidChangeSize;
- (BOOL)tryActiveAudioModule;
- (void)resignAudioModule;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (BOOL)_setActive:(BOOL)a0 listener:(id)a1;
- (BOOL)audioModuleBindingWCPlayerPipSupport;
- (void).cxx_destruct;

@end
