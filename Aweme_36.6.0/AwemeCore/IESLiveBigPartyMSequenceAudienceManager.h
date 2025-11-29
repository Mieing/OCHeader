@class HTSEventContext, IESLiveBigPartyMSequenceAudienceHostEntranceController, NSString;
@protocol IESLiveRoomService, IESLiveInteractionModuleMSequenceReactions;

@interface IESLiveBigPartyMSequenceAudienceManager : NSObject <IESLiveInteractionMSequenceAudienceRouter, HTSLiveMessageSubscriber, IESLiveInteractionModuleMSequenceReactions, HTSLiveRoomRemoteActions, IESLiveBigPartyActions, IESLiveSocialInteractPreLoadExAction>

@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isSelfHost;
@property (retain, nonatomic) IESLiveBigPartyMSequenceAudienceHostEntranceController *entranceController;
@property (nonatomic) BOOL isMSequenceRoomHostModeEnabled;
@property (nonatomic) BOOL enableSendGiftToHost;
@property (readonly, nonatomic) unsigned long long currentSocialInteractiveScene;
@property (readonly, nonatomic) id<IESLiveInteractionModuleMSequenceReactions> reactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)didJoinChannelWithLayout:(id)a0;
- (void)didUpdatedGuestListWithActiveList:(id)a0;
- (void)liveDidSwitchToMSequenceRoom:(id)a0 enableHost:(long long)a1;
- (void)liveDidExitMSequenceRoom:(id)a0 enableHost:(long long)a1;
- (id)initWithRoom:(id)a0 eventContext:(id)a1 DIContext:(id)a2;
- (void)registerBigPartyAudienceEntranceHideHandler:(id /* block */)a0;
- (void)registerBigPartyAudienceEntranceShowHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
