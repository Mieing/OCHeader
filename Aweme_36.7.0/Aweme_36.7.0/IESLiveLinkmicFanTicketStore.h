@class NSArray, NSMutableDictionary, NSString;
@protocol IESLiveCompoundSubscription, IESLiveInteractionLayoutRouter, IESLiveRoomService;

@interface IESLiveLinkmicFanTicketStore : IESLiveBaseFanTicketStore <IESLiveBaseFanTicketStore>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSMutableDictionary *modelDict;
@property (copy, nonatomic) NSArray *guestList;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)a0;
- (void)bizStoreDidChangedFromLayout:(id)a0 toLayout:(id)a1;
- (void)bizStoreDidChangeGuestCanAcceptGift:(BOOL)a0;
- (void)updateFanticketObserver:(id)a0;
- (BOOL)fanTicketHiddenWithUserModel:(id)a0;
- (id)observeFanTicketWithUserModel:(id)a0;
- (void)updateFanticketWithUserModel:(id)a0;
- (BOOL)withoutAnimationWithModel:(id)a0 withUserModel:(id)a1 withFirst:(BOOL)a2;
- (void).cxx_destruct;

@end
