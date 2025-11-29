@class NSArray, NSString;

@interface IESLiveSettingsPreloadService : IESLiveGeneralBaseService <IESLiveSettingsSubscriber, HTSLiveAudienceActions, IESLiveGuideActions, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) NSArray *freezedSettingsWhiteList;
@property (nonatomic) BOOL enableResetFreezedSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)serviceDidLaunch;
- (void)liveDidCloseAllRoom;
- (void)stopAnchorLive;
- (void)willCloseGuideViewController;
- (void)settingUpdateWithKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;

@end
