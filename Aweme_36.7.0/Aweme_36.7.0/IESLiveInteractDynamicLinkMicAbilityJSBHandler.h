@protocol IESLiveBigPartyAnchorRouter, IESLiveBigPartyAudienceRouter, IESLiveInteractPushStreaming, IESLiveInteractionGuestLinkerService, IESLiveInteractionModule, IESLiveMultiAudioAudienceLinkmicInnerService, IESLiveInteractionLinkerService;

@interface IESLiveInteractDynamicLinkMicAbilityJSBHandler : IESLiveInteractDynamicJSBHandler

@property (readonly, weak, nonatomic) id<IESLiveInteractPushStreaming> interactStreamer;
@property (readonly, weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (readonly, weak, nonatomic) id<IESLiveInteractionGuestLinkerService> guestLinker;
@property (readonly, weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (readonly, weak, nonatomic) id<IESLiveBigPartyAnchorRouter> bigPartyAnchorRouter;
@property (readonly, weak, nonatomic) id<IESLiveBigPartyAudienceRouter> bigPartyAudienceRouter;
@property (readonly, weak, nonatomic) id<IESLiveMultiAudioAudienceLinkmicInnerService> multiAudioAudienceInnerService;

- (id)handleGetLinkMicStatusWithCallScene:(id)a0 method:(id)a1 params:(id)a2;
- (id)jsb_get_link_service:(id)a0 context:(id)a1;
- (id)jsb_update_link_service:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
