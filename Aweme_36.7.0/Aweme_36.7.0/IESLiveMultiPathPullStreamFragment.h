@class NSString, IESLiveMoreToolsSettingItem;

@interface IESLiveMultiPathPullStreamFragment : IESLiveRoomComponent <HTSLiveStreamPlayerAction>

@property (nonatomic) long long accessState;
@property (nonatomic) BOOL useMultiPath;
@property (copy, nonatomic) NSString *pushIdentifier;
@property (retain, nonatomic) IESLiveMoreToolsSettingItem *settingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)executeMultiPathCommand:(BOOL)a0;
- (void)onNetworkQualityChangedWithPlayer:(id)a0 behavior:(long long)a1;
- (BOOL)multiPathPullStreamEnable;
- (void)registerMultiPathItem;
- (void)setupMultiPathPullStream;
- (void)trackMultiPathExecuteStatus:(id)a0;
- (void)multiPathPullStreamSwitchChanged:(BOOL)a0 isWeakNetwork:(BOOL)a1;
- (void)initiateMultiPathPullStream;
- (void).cxx_destruct;

@end
