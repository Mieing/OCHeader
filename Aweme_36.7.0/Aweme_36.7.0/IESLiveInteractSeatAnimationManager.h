@class IESLiveCountTimer, NSMutableDictionary, NSString;
@protocol IESLiveInteractSeatAnimationManagerDelegate;

@interface IESLiveInteractSeatAnimationManager : NSObject <IESLiveInteractSeatAnimationProtocol, IESLiveInteractionLinkerServiceAction>

@property (retain, nonatomic) NSMutableDictionary *nodesMap;
@property (retain, nonatomic) IESLiveCountTimer *countTimer;
@property (retain, nonatomic) NSString *anchorID;
@property (nonatomic) BOOL seatAnimationEnable;
@property (nonatomic) BOOL cityInfoAnimationEnable;
@property (weak, nonatomic) id<IESLiveInteractSeatAnimationManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)interactionLinkerService:(id)a0 interactListDidChangeFrom:(id)a1 to:(id)a2;
- (void)interactionLinkerService:(id)a0 onReceivedLinkEnterMessage:(id)a1;
- (BOOL)shouldShowSeatingAnimationWithUserID:(id)a0;
- (void)startShowSeatingAnimationWithUserID:(id)a0;
- (void)guestInfoViewDidShowWithUserID:(id)a0;
- (void)preprocessWithJoinChannelResponse:(id)a0;
- (void)preprocessWithEnterContent:(id)a0;
- (id)seatingImageWithUserID:(id)a0;
- (void)preprocess:(id)a0 applyType:(int)a1 matchEffect:(id)a2 cityEffect:(id)a3;
- (void)finishNodeWithUserID:(id)a0;
- (void)unload;
- (void).cxx_destruct;
- (id)init;

@end
