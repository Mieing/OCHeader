@class NSString;
@protocol IESLiveRoomService, IESLiveInteractionModuleMSequenceReactions;

@interface IESLiveBigPartyMSequenceAnchorManager : NSObject <IESLiveInteractionMSequenceAnchorRouter, HTSLiveMessageSubscriber, IESLiveInteractionModuleMSequenceReactions, IESLiveSocialInteractAction>

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isBigPartyTurnedOnPassivelyByMSequence;
@property (nonatomic) BOOL isTurningOnBigParty;
@property (nonatomic) BOOL isSwitchingBigParty;
@property (readonly, nonatomic) unsigned long long currentInteractiveScene;
@property (nonatomic) BOOL isMSequenceRoomHostModeEnabled;
@property (nonatomic) BOOL enableSendGiftToHost;
@property (readonly, nonatomic) id<IESLiveInteractionModuleMSequenceReactions> reactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionModeStartedWithLayout:(id)a0;
- (void)liveDidStartAsMSequenceRoom:(id)a0 enableHost:(long long)a1;
- (void)liveDidSwitchToMSequenceRoom:(id)a0 enableHost:(long long)a1;
- (void)liveDidExitMSequenceRoom:(id)a0 enableHost:(long long)a1;
- (id)initWithRoom:(id)a0 DIContext:(id)a1;
- (void)guest:(id)a0 didConnectAsHostInMSequenceRoom:(id)a1;
- (void)guest:(id)a0 didDisconnectAsHostInMSequenceRoom:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
