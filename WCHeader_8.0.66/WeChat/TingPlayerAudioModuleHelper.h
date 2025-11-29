@class NSString;
@protocol TingPlayerMinimizeHelperDelegate, TingFlowPlayerProtocol;

@interface TingPlayerAudioModuleHelper : NSObject <WCAudioModuleDelegate, MonoServiceMgrExt>

@property (weak, nonatomic) id<TingFlowPlayerProtocol> player;
@property (nonatomic) BOOL bWaitRecoverNotify;
@property (nonatomic) BOOL bIntterutedBy3rdApp;
@property (nonatomic) BOOL isHeadsetConnected;
@property (nonatomic) BOOL isIsolateModule;
@property (nonatomic) BOOL isDissociativeModule;
@property (nonatomic) BOOL isRequestFocusManual;
@property (nonatomic) BOOL disableAudioSessionSettings;
@property (nonatomic) BOOL isAbandonFocusForce;
@property (nonatomic) int moduleScene;
@property (weak, nonatomic) id<TingPlayerMinimizeHelperDelegate> minimizeHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dissociativeModuleKey;

- (id)initWithPlayer:(id)a0;
- (void)dealloc;
- (unsigned int)playerModuleId;
- (id)curMinimizeHelper;
- (BOOL)isPlaying;
- (BOOL)canPlay;
- (BOOL)canPlayAndAlterConflict:(BOOL)a0;
- (BOOL)isAuidioModuleActive;
- (BOOL)isAuidioModuleInterrupted;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)cancelInterruptionNotify;
- (void)pushRestorePlayer;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)audioModuleDidRemoveFromInterruptList:(id)a0;
- (void)applicationEnterForeground;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)a0;
- (BOOL)checkIfHeadsetConnected;
- (void)onAudioMonoServiceBussinessAdded:(id)a0 inMainScene:(BOOL)a1;
- (void)passivePause;
- (void).cxx_destruct;

@end
