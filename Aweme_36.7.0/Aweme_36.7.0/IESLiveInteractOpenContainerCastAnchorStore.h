@class HTSEventContext, NSString, IESLiveInteractOpenContainerCastInfo, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveInteractOpenContainerCastAnchorStore : NSObject <IESLiveCommonCastScreenAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL isStopRequesting;
@property (nonatomic) BOOL isStartRequesting;
@property (retain, nonatomic) IESLiveInteractOpenContainerCastInfo *castInfo;
@property (copy, nonatomic) id /* block */ startCastTask;
@property (copy, nonatomic) id /* block */ stopCastTask;
@property (nonatomic) double didStartCastTimestamp;
@property (readonly, copy, nonatomic) NSString *openContainerAppName;
@property (readonly, copy, nonatomic) NSString *openContainerAppIcon;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long preferredFPS;
@property (readonly, nonatomic) int profile;
@property (copy, nonatomic) NSString *openSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (BOOL)isMixOnClient;
- (void)commonCastScreenDidStart;
- (void)commonCastScreenDidEnd;
- (void)commonCastScreenRTCInfoDidUpdate;
- (void)forceStopOpenContainerCastWithAppID:(id)a0 castType:(unsigned long long)a1 stopResponse:(id)a2 continueBlock:(id /* block */)a3 extra:(id)a4;
- (void)bringOpenContainerAppToForeground;
- (void)trackOpenContainerCastDuration;
- (void)forceStopCurrentOpenContainerCast;
- (void)excuteStartCastTaskFromSource:(id)a0;
- (void)excuteStopCastTaskFromSource:(id)a0;
- (void)willStartCastWithAppID:(id)a0 castType:(unsigned long long)a1 extra:(id)a2;
- (void)willStopCastWithAppID:(id)a0 castType:(unsigned long long)a1 extra:(id)a2;
- (void)trackAnchorOpenContainerCastWithEventName:(id)a0 extraDict:(id)a1;
- (void)p_starOpenContainertCastRequest;
- (void)p_stopOpenContainertCastRequest;
- (void)p_handleStopCastResponse:(id)a0 stopBlock:(id /* block */)a1;
- (void)p_setupStartCastTask:(id /* block */)a0;
- (void)p_setupStopCastTask:(id /* block */)a0;
- (void)p_updateLiveExtInfoFromSource:(id)a0;
- (void)p_clearCastProcess;
- (void)p_bringSonicAppToForeground;
- (void)p_bringNativeAppToForeground;
- (id)p_buildCommonParameters;
- (void).cxx_destruct;

@end
