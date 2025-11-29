@class NSArray, NSString;

@interface IESLiveCompetitionFanTicketStore : IESLiveBaseFanTicketStore <IESLiveBaseFanTicketStore, IESLiveCompetitionFanticketAdapter>

@property (copy, nonatomic) NSArray *guestList;
@property (nonatomic) BOOL guestCanAcceptGift;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFanTicketViewWithScoreInfo:(id)a0 quickInteract:(id)a1 withoutAnimation:(BOOL)a2;
- (BOOL)shouldUpdateScoreWithScoreInfo:(id)a0 user:(id)a1;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)a0;
- (void).cxx_destruct;

@end
