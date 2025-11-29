@class NSString, UIViewController;

@interface IESGCPCGSmallWindowService : NSObject <IESGCPDIContextSubscriber>

@property (weak, nonatomic) UIViewController *container;
@property (nonatomic) BOOL isVoiceOn;
@property (nonatomic) BOOL isVideoOn;
@property (nonatomic) BOOL setMuteByManual;
@property (copy, nonatomic) NSString *storeResolutionKey;
@property (copy, nonatomic) id /* block */ windowTapAction;
@property (copy, nonatomic) id /* block */ windowHideAction;
@property (copy, nonatomic) id /* block */ onMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ onStateChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVoiceOn:(BOOL)a0;
- (void)hideSmallLiveWindow;
- (void)didSetGameCPDIContext;
- (void)pullStreamDidUpdateResolutionType:(id)a0;
- (void)setVideoOn:(BOOL)a0;
- (long long)smallWindowState;
- (void)restoreLiveStreamConfig;
- (BOOL)isInLiveRoom;
- (void)storeLiveStreamConfig;
- (void)syncSmallWindowState;
- (id)initWithDIContext:(id)a0 container:(id)a1;
- (void)_registerGlobalSmallWindowServiceAllowList;
- (id)liveSmallWindowService;
- (void)_updateVideoOn:(BOOL)a0 voiceOn:(BOOL)a1;
- (void)_switchStateToVideoOffVoiceOff;
- (void)_switchStateToVideoOnVoiceOn;
- (void)_switchStateToVideoOnVoiceOff;
- (void)_switchStateToVideoOffVoiceOn;
- (void)_trackDurationWithVideoOn:(BOOL)a0 isVoiceOn:(BOOL)a1;
- (id)livePlayerService;
- (void)_restoreLiveStreamResolution:(long long)a0;
- (void)_resumeLiveStream;
- (void)_handleRestoreResolutionResult:(BOOL)a0 error:(id)a1 userInfo:(id)a2 retryCount:(long long)a3;
- (void)_showGlobalSmallWindow;
- (void)_switchSmallWindowToLowestLevelResolutionIfNeeded;
- (void)_unregisterGlobalSmallWindowServiceAllowList;
- (void).cxx_destruct;
- (void)clear;

@end
