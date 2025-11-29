@class IESLiveAudienceInteractPermissionChecker, IESLiveInteractGuestLinkMonitor, IESLiveInteractionGuestLinkPanel, HTSLivePopupNavigationController, NSArray, NSString;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveInteractionLinkerService;

@interface IESLiveInteractGuestLinkComponent : IESLiveInteractComponentBase <IESLiveInteractionModuleGuestLinkInterface, IESLiveInteractionGuestLinkerServiceAction>

@property (weak, nonatomic) IESLiveInteractionGuestLinkPanel *linkPanel;
@property (retain, nonatomic) HTSLivePopupNavigationController *navigationPanel;
@property (retain, nonatomic) IESLiveAudienceInteractPermissionChecker *permissionChecker;
@property (retain, nonatomic) IESLiveInteractGuestLinkMonitor *monitor;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linker;
@property (weak, nonatomic) id<IESLiveInteractDynamicContainerProvider> dynamicContainer;
@property (readonly, nonatomic) BOOL isWatching;
@property (readonly, nonatomic) BOOL isLinking;
@property (readonly, copy, nonatomic) NSArray *linkedUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentBindContext;
- (void)interactionGuestLinker:(id)a0 didCreateWithContext:(id)a1;
- (void)interactionGuestLinker:(id)a0 didCloseWithContext:(id)a1;
- (void)interactionGuestLinkerInteractDidStart:(id)a0;
- (void)interactionGuestLinkerInteractDidEnd:(id)a0;
- (void)interactionGuestLinker:(id)a0 onLinkError:(id)a1;
- (void)interactionGuestLinker:(id)a0 onUserDidJoined:(id)a1;
- (void)interactionGuestLinker:(id)a0 didUpdateChannel:(id)a1;
- (void)interactionGuestLinker:(id)a0 newSessionCreated:(id)a1 local:(BOOL)a2;
- (void)interactionGuestLinker:(id)a0 someoneTalkingStateChanged:(id)a1 talkingList:(id)a2;
- (void)interactionGuestLinker:(id)a0 onActiveChanged:(BOOL)a1 linkmicID:(id)a2;
- (void)componentEnterRoom;
- (void)componentDidJoinChannel;
- (void)componentDidLeaveChannel;
- (void)enterLinkChannel:(id)a0 completion:(id /* block */)a1;
- (void)handleUpdateJSBEvent:(id)a0 container:(id)a1 completion:(id /* block */)a2;
- (void)removeLinkPanel:(BOOL)a0;
- (id)popupItem:(id)a0;
- (void).cxx_destruct;

@end
