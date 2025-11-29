@class UIView, BDPAudioSessionLock, NSString, BDPScreenOnLock, TVLManager, BDPUniqueID, BDPVideoPlayerDisplayView, BDPLivePlayerModel;
@protocol BDPLivePlayerStateDelegate;

@interface BDPLivePlayer : BDPContentPlayer <TVLDelegate, BDPLivePlayerProtocol, BDPCrossTalkComponentDelegate>

@property (retain, nonatomic) TVLManager *livePlayerEngine;
@property (weak, nonatomic) id<BDPLivePlayerStateDelegate> stateDelegate;
@property (nonatomic) long long retryCount;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isStall;
@property (retain, nonatomic) BDPScreenOnLock *screenOnLock;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPVideoPlayerDisplayView *displayView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) BDPLivePlayerModel *playerModel;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recieveError:(id)a0;
- (void)stallStart;
- (void)stallEnd;
- (void)onStreamDryup:(id)a0;
- (void)onMonitorLog:(id)a0;
- (void)loadStateChanged:(id)a0;
- (void)startRender;
- (void)playerItem:(id)a0 currentResolution:(id)a1 degradeFailedWithError:(id)a2;
- (void)playerItem:(id)a0 willSwitchFromPreferences:(id)a1 toPreferences:(id)a2;
- (void)manager:(id)a0 didReceiveSEI:(id)a1;
- (void)manager:(id)a0 videoSizeDidChange:(struct CGSize { double x0; double x1; })a1;
- (void)playerItem:(id)a0 didSwitchFromPreviousPreferences:(id)a1 toCurrentPreferences:(id)a2;
- (void)manager:(id)a0 playerItemStatusDidChange:(long long)a1;
- (void)mute:(BOOL)a0;
- (long long)currentActionType;
- (id)currentUniqueID;
- (BOOL)playerItem:(id)a0 shouldReplaceCurrentPreferencesWithSuggestedPreferences:(id)a1;
- (id)playerItem:(id)a0 customizedPreferencesWithUserInfo:(id)a1;
- (void)manager:(id)a0 didCloseInAsyncMode:(BOOL)a1;
- (void)playDirectly;
- (void)pauseDirectly;
- (id)ttComponentName;
- (id)ttComponentId;
- (long long)currentPageID;
- (void)pauseByCrossTalk:(id)a0;
- (id)initWithModel:(id)a0 uniqueID:(id)a1 stateDelegate:(id)a2;
- (void)updateMarkWithEnable:(BOOL)a0 text:(id)a1 color:(id)a2;
- (void)stopDirectly;
- (void)p_stateChange:(long long)a0 extra:(id)a1;
- (void)muteDirectly:(BOOL)a0;
- (long long)p_errorCodeFromCode:(long long)a0;
- (id)p_errorTypeFromCode:(long long)a0;
- (void)triggerLivePlayerStatusChangeIfNeededWithState:(long long)a0 extra:(id)a1;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)dealloc;
- (id)shareMode;
- (void)updateWithModel:(id)a0;

@end
