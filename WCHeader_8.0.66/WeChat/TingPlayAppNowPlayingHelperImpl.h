@class NSMutableDictionary, TingApiPlayTaskListenerBridge, NSString, NSDate, UnitRCWeakPtr, MPMediaItemArtwork;
@protocol TingPlayAppConfig;

@interface TingPlayAppNowPlayingHelperImpl : NSObject <IRemoteControlCheckExt, MMImageLoaderObserver, TingApiPlayTaskListenerBridgeDelegate, TingNowPlayingModule>

@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (retain, nonatomic) NSDate *lastCheckNowPlayingInfoTime;
@property (nonatomic) long long backgroundState;
@property (retain, nonatomic) MPMediaItemArtwork *defaultArtwork;
@property (retain, nonatomic) TingApiPlayTaskListenerBridge *listenerBridge;
@property (retain, nonatomic) id<TingPlayAppConfig> playAppConfig;
@property (retain, nonatomic) UnitRCWeakPtr *playApp;
@property (copy, nonatomic) NSString *curListenId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerArtworkResponseImage:(id)a0;
+ (id)reportParamWithPlayApp:(id)a0;

- (id)initWithPlayAppConfig:(id)a0 playApp:(id)a1;
- (void)dealloc;
- (id)playTask;
- (void)resumePlayer;
- (void)pausePlayer;
- (id)moduleId;
- (BOOL)canResetNowPlay;
- (BOOL)canUpdateNowPlayingInfoCenter;
- (void)resetRemoteControlAndPlayingInfo;
- (void)resetRemoteControlAndPlayingInfoWithPlayingItem:(id)a0;
- (long long)onPlayCommand:(id)a0;
- (long long)onPauseCommand:(id)a0;
- (long long)onPlayPauseCommand:(id)a0;
- (long long)onChangePlaybackPositionCommand:(id)a0;
- (long long)onNextTrackCommand:(id)a0;
- (long long)onPrevTrackCommand:(id)a0;
- (void)registerCommandCenterActions;
- (void)refreshRemoteControlButtonStatus:(int)a0;
- (void)registerMPRemoteCommand:(id)a0 action:(SEL)a1;
- (void)setMPRemoteCommand:(id)a0 actionHandler:(id /* block */)a1;
- (long long)onHandleMPRemoteCommandClicked:(id)a0;
- (void)updateNowPlayingInfoIfNeedWithPlayingItem:(id)a0 playTask:(id)a1;
- (void)onNowPlayingInfoUpdated:(id)a0;
- (id)nowPlayingInfoWithPlayingItem:(id)a0 playTask:(id)a1;
- (id)nowPlayingInfoWithPlayingItemBase:(id)a0 playTask:(id)a1;
- (id)genNowPlayingArtworkForImage:(id)a0;
- (unsigned long long)__genNowPlayingPlayBackState:(int)a0;
- (void)iRemoteControlCheckEvent:(id)a0;
- (void)iRemoteControlCheckPluginOn;
- (void)iRemoteControlCheckPluginOff;
- (void)onRemoteControlCheckPluginOn;
- (void)onRemoteControlCheckPluginOff;
- (void)onTingPlayTaskPlayingContextUpdated:(id)a0;
- (void)onTingPlayTaskStateChanged:(id)a0 state:(int)a1 event:(int)a2 eventContext:(id)a3;
- (void)onProgressChanged:(long long)a0 displayTimeMs:(long long)a1 duration:(long long)a2;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)onPlayingInfoUpdate:(id)a0;
- (void).cxx_destruct;

@end
