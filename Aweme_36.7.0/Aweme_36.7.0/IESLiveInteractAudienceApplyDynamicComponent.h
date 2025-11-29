@class NSString;
@protocol IESLiveInteractDynamicContainerProvider, IESLiveInteractionLinkerService;

@interface IESLiveInteractAudienceApplyDynamicComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveInteractAudienceApplyDynamicRouter, IESLiveInteractionLinkerServiceAction>

@property (nonatomic) long long currentWaitingUsersCount;
@property (weak, nonatomic, getter=dynamicContainerProvider) id<IESLiveInteractDynamicContainerProvider> dynamicContainerProvider;
@property (weak, nonatomic, getter=linker) id<IESLiveInteractionLinkerService> linker;
@property (nonatomic) BOOL isAudienceApplyLynxPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactionLinkerService:(id)a0 startWaitingWithContext:(id)a1;
- (void)interactionLinkerService:(id)a0 didCancelWaitingWithContext:(id)a1;
- (void)interactionLinkerService:(id)a0 userStateDidChangedFrom:(long long)a1 to:(long long)a2;
- (void)componentBindContext;
- (BOOL)enableLynxAudienceApplyPanel;
- (void)popUpLynxAudienceApplyPanelFromSeatPosition:(id)a0;
- (void)onReceiveDynamicApplyActionCallWithExtra:(id)a0;
- (void)onReceiveDynamicJumpToMatchRoomCallWithExtra:(id)a0;
- (void)onReceiveDynamicClickFastMatchButtonCallWithExtra:(id)a0;
- (void)onReceiveDynamicClickApplyInPriorityButtonCallWithExtra:(id)a0;
- (void)onReceiveDynamicAudienceApplyPanelLifeCycleNotificationWithExtra:(id)a0;
- (void)onReceiveWaitingListChangeMessage:(id)a0;
- (BOOL)enableRecommendRoom;
- (id)lynxApplyPanelSchema;
- (void)invokeApplyStateDynamicEventWithState:(id)a0;
- (BOOL)isLinkMicUserCountReachLimit;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
