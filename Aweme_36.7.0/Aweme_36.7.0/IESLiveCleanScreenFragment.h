@class IESLiveCleanScreenLandscapeAbility, IESLiveCleanScreenNormalAbility, HTSLiveToolbarItem, NSString;

@interface IESLiveCleanScreenFragment : IESLiveRoomComponent <IESLiveInteractAction>

@property (retain, nonatomic) IESLiveCleanScreenLandscapeAbility *landscapeAbility;
@property (retain, nonatomic) IESLiveCleanScreenNormalAbility *normalAbility;
@property (nonatomic) BOOL useClearService;
@property (retain, nonatomic) HTSLiveToolbarItem *cleanScreenItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (void)componentRefresh;
- (void)didJoinRTCChannelByAudienceWithScene:(unsigned long long)a0;
- (void)loadMoreToolsCleanScreenBtn;
- (void)exitCleanModeIfNeedWithScene:(unsigned long long)a0;
- (void).cxx_destruct;

@end
