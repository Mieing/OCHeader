@class NSArray, NSMutableDictionary, NSString;
@protocol IESLiveInteractionLayoutRouter, IESLiveCompoundSubscription, IESLiveTeamFightRouter, IESLiveMultiOrderSingRouter;

@interface IESLiveOrderSingFanTicketStore : IESLiveBaseFanTicketStore <IESLiveBaseFanTicketStore, IESLiveInteractionPlaymodeActions>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableDictionary *modelDict;
@property (copy, nonatomic) NSArray *guestList;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (weak, nonatomic) id<IESLiveMultiOrderSingRouter> orderSingRouter;
@property (weak, nonatomic) id<IESLiveTeamFightRouter> teamfightRouter;
@property (nonatomic) BOOL didAvatarOrderSingStart;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interactionPlaymodeDidStart:(int)a0;
- (void)interactionPlaymodeDidEnd:(int)a0;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)a0;
- (void)bizStoreDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)updateFanticketObserver:(id)a0;
- (id)observeFanTicketWithUserModel:(id)a0;
- (void)endAvatarOrderSingIfNeed;
- (void)startAvatarOrderSingIfNeed;
- (id)goldenMicModelWithMicCount:(id)a0 isFirst:(BOOL)a1;
- (BOOL)isInAvatarOrderSing;
- (void)updateFanTicketWithUserModel:(id)a0;
- (id)goldenMicTextColorWithMicCount:(id)a0;
- (void).cxx_destruct;

@end
