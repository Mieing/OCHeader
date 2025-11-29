@class NSString, IESLiveInteractOpenContainerCastAudienceStore;

@interface IESLiveInteractOpenContainerCastAudienceComponent : IESLiveInteractComponentBase <IESLiveInteractOpenContainerCastAudienceRouter, HTSLiveMessageSubscriber, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) IESLiveInteractOpenContainerCastAudienceStore *store;
@property (nonatomic) unsigned long long rtcVideoFillMode;
@property (readonly, nonatomic) BOOL isProcessing;
@property (readonly, copy, nonatomic) NSString *openContainerAppID;
@property (readonly, copy, nonatomic) NSString *openContainerAppName;
@property (readonly, copy, nonatomic) NSString *openContainerAppIcon;
@property (readonly, nonatomic) unsigned long long openContainerCastType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (id)commonEventParams;
- (void)interactionLinkerServiceInteractWillEnd:(id)a0;
- (void)interactionLinkerService:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)componentBindContext;
- (void)bringOpenContainerAppToForeground;
- (void)trackOpenContainerCastWithEventName:(id)a0 extraDict:(id)a1;
- (void)componentEnterRoom;
- (void)switchGLPreviewFillModeWhenConnetedWithIsStartCast:(BOOL)a0;
- (void)p_switchGLPreviewFillModeWithIsFitMode:(BOOL)a0 source:(id)a1;
- (id)hostPreview;
- (void)p_switchGLPreviewFillModeWithPreview:(id)a0 isFitMode:(BOOL)a1 source:(id)a2;
- (void)switchGLPreviewFillModeWhenProcessingWithIsConnected:(BOOL)a0;
- (id)bigPartyProvider;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (void)messageReceived:(id)a0;

@end
