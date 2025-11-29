@class IESLivePaywallTicketCardView, NSMutableDictionary, NSString, HTSLiveToolbarItem, ProductsData_ToolBar, NSNumber, IESLiveRightBottomMutuallyExclusiveItem;

@interface IESLivePaywallTicketCardFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveToolbarComponentHandler, IESLivePaywallTicketCardProvider>

@property (retain, nonatomic) IESLivePaywallTicketCardView *ticketCardView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) NSMutableDictionary *cardShowTimeDict;
@property (copy, nonatomic) NSString *ticketOwnerId;
@property (copy, nonatomic) NSNumber *ticketId;
@property (copy, nonatomic) NSString *ticketURL;
@property (nonatomic) BOOL bringProductSwitchStatus;
@property (retain, nonatomic) ProductsData_ToolBar *productListToolBar;
@property (nonatomic) long long messageTicketId;
@property (copy, nonatomic) id /* block */ showingCardBlock;
@property (nonatomic) BOOL hasShowToolbar;
@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)remoteRoomDataReady:(id)a0;
- (id)commonParameters;
- (id)enterFromMergeTrack;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (BOOL)currentBringProductSwitchStatus;
- (void)showCardViewWithLynxUrl:(id)a0 duration:(double)a1 ticketId:(id)a2;
- (BOOL)anchorIsTicketOwner;
- (void)hideCardViewWithTicketId:(id)a0;
- (void)tapTicketItem;
- (void)trackTicketModuleWithTicketId:(id)a0 form:(id)a1 isClick:(BOOL)a2;
- (void)trackAdTicketModuleWithTicketId:(id)a0 isClick:(BOOL)a1;
- (void)onExplainProductChanged:(id)a0;
- (id)buyTicketModuleParameters;
- (id)newProductParameters;
- (id)paidContentType:(int)a0;
- (id)paidContentId;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
