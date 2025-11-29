@class NSMutableDictionary, WXAudioNative, NSMutableSet, WAAppTask, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAJSContextPlugin_WxAudioPlayer : WAJSContextPluginBase <WMPFAudioAPIProtocol, wxAudioOutputDelegate, WCAudioModuleDelegate, IWACustomLoadingExt, IWAJSContextPlugin_AudioPlayer, wxAudioStateDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic) BOOL isNeedResumeWXMusic;
@property (readonly, nonatomic) WAAppTask *task;
@property (nonatomic) BOOL obeyMuteSwitch;
@property (nonatomic) BOOL mixWithOthers;
@property (nonatomic) BOOL speakerOn;
@property (nonatomic) BOOL useWXAUDIO;
@property (nonatomic) BOOL muteOnBg;
@property (retain, nonatomic) NSMutableDictionary *playBackDelegates;
@property BOOL isAudioModuleActiveNow;
@property (retain, nonatomic) NSMutableSet *playingAudioEngineSet;
@property BOOL bInterruptNow;
@property BOOL bInterruptByInnerApp;
@property BOOL bInterruptBySystem;
@property (retain, nonatomic) NSMutableDictionary *sessionIdDict;
@property (readonly, nonatomic) WXAudioNative *wxaudionative;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)audioTmpRootPath;
- (id)audioTmpPathByfileName:(id)a0;
- (id)audioCacheDataPathForSrc:(id)a0;
- (id)localPathByAudioData:(id)a0 pathExtension:(id)a1;
- (BOOL)isPlayingAudio;
- (void)setInnerAudioSession:(BOOL)a0 mixWithOthers:(BOOL)a1 speakerOn:(BOOL)a2;
- (void)setPlayBackDelegate:(unsigned int)a0 delegate:(id)a1;
- (void)addObserver;
- (void)removeObserver;
- (void)activeAudioSession;
- (void)forceResumeAllPlayer;
- (void)forcePauseAllPlayer;
- (void)forcePauseAllPlayer:(BOOL)a0;
- (BOOL)existPlayerPlaying;
- (BOOL)existPlayerWaiting;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)resumeMusicIfNeed:(BOOL)a0;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)setAudioSessionByWeAppEnterBackground;
- (void)onPcmOutputSessionId:(id)a0 data:(char *)a1 size:(unsigned int)a2 channels:(unsigned int)a3 samplerate:(unsigned int)a4 fmt:(int)a5;
- (BOOL)shouldForceUseBuiltinMic;
- (void)canPlayNowAndAutoActive:(unsigned long long)a0 block:(id /* block */)a1;
- (void)onWXAudioState:(int)a0 audioId:(unsigned long long)a1;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)onCustomLoadingCreate:(id)a0;
- (void)onCustomLoadingDestory:(id)a0;
- (id)mixListForAudioModule:(id)a0;
- (id)mixList;
- (void)setActiveAsync:(BOOL)a0 completion:(id /* block */)a1;
- (id)getIdentifier;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)setJSContextOwner:(id)a0;
- (void)checkIfSendInterruptionEvent;
- (void).cxx_destruct;

@end
