@class NSString, HTSLiveToolbarItem, IESLiveAnchorTicketApi, NSMutableArray, NSNumber;

@interface IESLivePaywallAnchorTicketFragment : IESLiveRoomComponent <IESLiveCommercialComponentsActions, HTSLiveMessageSubscriber, HTSLiveToolbarActions, IESLiveToolbarComponentHandler>

@property (retain, nonatomic) HTSLiveToolbarItem *ticketToolbarItem;
@property (retain, nonatomic) NSMutableArray *subscriberList;
@property (retain, nonatomic) IESLiveAnchorTicketApi *ticketApi;
@property (nonatomic) unsigned long long switchedFromComponent;
@property (copy, nonatomic) NSNumber *ticketId;
@property (nonatomic) BOOL hasTicket;
@property (copy, nonatomic) NSString *ticketOwnerId;
@property (nonatomic) BOOL paidLiveBringingProductFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)toolbarComponentRemovedReason:(unsigned long long)a0 extra:(id)a1;
- (void)willSwitchToCommercialComponent:(unsigned long long)a0;
- (void)onToolbar:(id)a0 sizeChanged:(struct CGSize { double x0; double x1; })a1;
- (void)onExpandGroupShow:(BOOL)a0;
- (void)unsubscribeEvent;
- (BOOL)isInMoreGroup;
- (BOOL)canSellTicket;
- (id)paidLiveCreateRight;
- (void)registerSubscribeEvent;
- (id)redDotDidShow;
- (void)switchEntranceInMore;
- (void)trackIconClickInMore;
- (void)openExplainCardPanel;
- (void)trackBottomIconClick;
- (void)trackBottomIconShow;
- (void)updateTicketInfoWithTicketId:(id)a0 isAdd:(BOOL)a1 completion:(id /* block */)a2;
- (void)openPanelWithUrl:(id)a0 extraParams:(id)a1 isInMore:(BOOL)a2;
- (void)trackTicketSalesPageShow;
- (id)paidLiveCreateRightsFE;
- (BOOL)p_hasReplayRight;
- (void)trackCarryTicketConfirmClick:(BOOL)a0;
- (void)openTicketPanelInMore;
- (void)trackCarryTicketConfirmShow;
- (id)prefixForCacheKey;
- (void)trackIconShowInMore;
- (void)subscribeTicketChosenEvent;
- (BOOL)isTicketOwner;
- (id)paidLiveCreateRights;
- (id)baseTrackParams:(id)a0;
- (void)deactivateSourceComponent;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
