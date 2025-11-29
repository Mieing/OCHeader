@class NSString;

@interface IESLiveLockScreenFragment : IESLiveRoomComponent <HTSLiveAudienceActions>

@property (nonatomic) BOOL disableRemote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (void)liveDidEnterBackground;
- (void)applicationResignActiveNotification:(id)a0;
- (BOOL)dynamicActivityShowing;
- (BOOL)p_shouldClearLookScreenCover;
- (void)clearLockScreenCovers;
- (void)disableAllRemoteCommands;
- (void)configLockScreenCovers;
- (BOOL)p_isNowPlayingControlEnable;
- (void)p_resumePlay;
- (void)p_trackEventOnClickPlay:(BOOL)a0;
- (BOOL)isEnablePip;
- (BOOL)p_isNewBackgroundPlayerControlEnable;
- (void)dealloc;
- (void)setup;

@end
