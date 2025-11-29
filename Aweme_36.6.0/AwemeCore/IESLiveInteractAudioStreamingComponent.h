@class NSString, IESLiveInteractAudioChatRoomVideoBGSEIParserResult;
@protocol IESLiveRealStreamingProvider, IESLiveInteractionLayoutRouter, IESLiveInteractUserModel, HTSLiveViewHierarchyProvider, HTSLiveStreamPlayerProvider, IESLiveInteractionLinkerService, IESLivePublicScreenLayoutProvider, IESLiveAudioBackgroundRouter;

@interface IESLiveInteractAudioStreamingComponent : IESLiveInteractComponentBase <IESLiveInteractionLinkerServiceAction, IESLiveSEIListener, IESLiveSocialInteractAction, IESLiveInteractAudioStreamingProvider, HTSLiveMessageSubscriber>

@property (weak, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayerProvider;
@property (weak, nonatomic) id<IESLiveAudioBackgroundRouter> audioBackgroundRouter;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<HTSLiveViewHierarchyProvider> viewHierarchyProvider;
@property (weak, nonatomic) id<IESLivePublicScreenLayoutProvider> publicScreenLayoutProvider;
@property (copy, nonatomic) NSString *currentUserID;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (retain, nonatomic) IESLiveInteractAudioChatRoomVideoBGSEIParserResult *latestSEIResult;
@property (retain, nonatomic) id<IESLiveInteractUserModel> latestStreamingUser;
@property (nonatomic) BOOL showingPlayer;
@property (nonatomic) BOOL hideAudioBG;
@property (nonatomic) BOOL enlargeGuestStreaming;
@property (nonatomic) unsigned long long curRTCPreviewState;
@property (nonatomic) BOOL audioCustomizeStreamModeOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)currentLayoutDidChangedFrom:(id)a0 to:(id)a1;
- (BOOL)isSelfLinked;
- (id)supportedLayouts;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)interactionLinkerService:(id)a0 didDisconnectWithContext:(id)a1;
- (void)interactionLinkerServiceUserAlreadyLinked:(id)a0;
- (void)interactionLinkerService:(id)a0 userDidLeavedRTC:(id)a1;
- (void)componentBindContext;
- (BOOL)isValidWithLayout:(id)a0;
- (BOOL)enableAudioChatRoomCustomizeStreaming;
- (BOOL)customizeStreamModeOpen;
- (id)curStreamingUserLinkmicID;
- (void)audioRTCPreviewStateDidChange:(unsigned long long)a0 source:(id)a1;
- (void)handleAudioStreamContent:(id)a0;
- (void)updateStreamPlayerRendering:(BOOL)a0;
- (void)updateAudioBackgroundHidden:(BOOL)a0;
- (BOOL)currentRTCPreviewShowing;
- (id)userWithLinkmicID:(id)a0;
- (void)startAudioCustomizeStreamingMix;
- (void)terminateAudioCustomizeStreamingMix;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (id)currentLayout;
- (void)messageReceived:(id)a0;

@end
