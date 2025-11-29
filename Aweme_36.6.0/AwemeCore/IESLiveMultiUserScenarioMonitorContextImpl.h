@class NSString, IESLiveMultiUserScenarioMonitorPerfContext, NSArray;
@protocol IESLiveInteractPushStreaming, IESLiveInteractionSettingsRouter, IESLiveRoomService, IESLiveMultiAudioAudienceRouter, IESLiveSocialInteractiveRouter, IESLiveUserService, IESLiveInteractionModuleBigPartyInterface, IESLiveInteractionModuleIntimateChatInterface, IESLiveInteractTrackDataSource, IESLiveInteractionModule;

@interface IESLiveMultiUserScenarioMonitorContextImpl : NSObject <HTSLiveRoomRemoteActions, IESLiveMultiUserScenarioMonitorContext>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (weak, nonatomic) id<IESLiveInteractPushStreaming> interactionStreamer;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialRouter;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (weak, nonatomic) id<IESLiveInteractionModuleBigPartyInterface> bigPartyInterface;
@property (weak, nonatomic) id<IESLiveInteractionModuleIntimateChatInterface> intimateChatInterface;
@property (weak, nonatomic) id<IESLiveMultiAudioAudienceRouter> multiAudioAudienceRouter;
@property (weak, nonatomic) id<IESLiveInteractionSettingsRouter> interactionSettings;
@property (retain, nonatomic) IESLiveMultiUserScenarioMonitorPerfContext *perfContext;
@property (weak, nonatomic) id<IESLiveInteractTrackDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *roomType;
@property (readonly, copy, nonatomic) NSString *anchorID;
@property (readonly, copy, nonatomic) NSString *currentUserID;
@property (readonly, copy, nonatomic) NSString *currentUserRole;
@property (readonly, copy, nonatomic) NSString *currentUserAdminType;
@property (readonly, copy, nonatomic) NSString *currentScene;
@property (readonly, copy, nonatomic) NSString *currentUILayout;
@property (readonly, copy, nonatomic) NSArray *currentPlayModes;
@property (readonly, copy, nonatomic) NSString *currentMixStreamType;
@property (readonly, copy, nonatomic) NSString *roomVisibilityRange;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (id)buildCommonParametersWithExtra:(id)a0;
- (id)buildCommonParameters;
- (id)sceneStringFromEnum:(long long)a0;
- (id)UILayoutStringFromEnum:(long long)a0;
- (void).cxx_destruct;

@end
