@class NSString, IESECLiveDurationTracker, NSMutableArray, IESECLiveAnchorGoodsListAdapter;

@interface IESECLiveAnchorPickedCommodityWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber, IESECLiveAnchorPickedCommodityService>

@property (retain, nonatomic) IESECLiveAnchorGoodsListAdapter *goodsListAdapter;
@property (retain, nonatomic) IESECLiveDurationTracker *explainDurationTracker;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeXBridgeEvent:(id)a0 callback:(id /* block */)a1;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)messageReceived_IESECLiveCommonMessage:(id)a0;
- (void)showPickedCommodityPanel;
- (void)closePickedCommodityPanel;
- (void)refreshPickedCommodityPanel:(id)a0;
- (void)setFlashSaleSwitchIsOn:(BOOL)a0;
- (void)setupXBridgeEventSubscriptions;
- (void)endTrackExplainGoodsDuration;
- (void)startTrackExplainGoodsDurationWithGoods:(id)a0;
- (void)handleCurrentCommodity:(int)a0 completion:(id /* block */)a1;
- (void)showOrderLimitAlertViewWithMessage:(id)a0;
- (void)showFlashViolationAlertWithMessage:(id)a0;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)messageReceived_IESECLivePopMessage:(id)a0;
- (void)messageReceived_IESECProductUpdateMessage:(id)a0;
- (void)messageReceived_IESECLiveSellerMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
