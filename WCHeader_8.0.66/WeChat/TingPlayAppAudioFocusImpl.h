@class UnitRCWeakPtr, NSString;
@protocol TingPlayAppAudioFocusDelegate;

@interface TingPlayAppAudioFocusImpl : NSObject <WCAudioModuleDelegate, MonoServiceMgrExt, TingAudioFocus>

@property (retain, nonatomic) UnitRCWeakPtr *playApp;
@property (retain, nonatomic) UnitRCWeakPtr *playTask;
@property (retain, nonatomic) UnitRCWeakPtr *audioFocusCallback;
@property (nonatomic) BOOL bWaitRecoverNotify;
@property (nonatomic) BOOL bIntterutedBy3rdApp;
@property (nonatomic) BOOL isHeadsetConnected;
@property (nonatomic) unsigned int identifier;
@property (weak, nonatomic) id<TingPlayAppAudioFocusDelegate> delegate;
@property (nonatomic) int moduleScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayAppConfig:(id)a0 playApp:(id)a1;
- (void)dealloc;
- (unsigned int)playerModuleId;
- (BOOL)isPlaying;
- (BOOL)canPlayAndAlterConflict:(BOOL)a0;
- (BOOL)isAuidioModuleActive;
- (BOOL)isAuidioModuleInterrupted;
- (BOOL)activeAudioModule;
- (void)deactiveAudioModule;
- (void)cancelInterruptionNotify;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)audioModuleDidRemoveFromInterruptList:(id)a0;
- (void)applicationEnterForeground;
- (void)didReceiveAVAudioSessionRouteChangeNotification:(id)a0;
- (BOOL)checkIfHeadsetConnected;
- (void)onAudioMonoServiceBussinessAdded:(id)a0 inMainScene:(BOOL)a1;
- (void)_requestFocus:(int)a0 context:(id)a1;
- (void)performOnMainThread:(id /* block */)a0;
- (void)requestFocus:(int)a0 context:(id)a1;
- (void).cxx_destruct;

@end
