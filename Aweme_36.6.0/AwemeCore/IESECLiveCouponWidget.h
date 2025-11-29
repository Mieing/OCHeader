@class NSString, NSDictionary, UIView, NSMutableArray, IESECLiveRandomDelayTimer;
@protocol IESECLivePluginLayoutView, IESHYContainerProtocol, IESECLiveShortTouchItem, AnnieLiveBizCardProviderProtocol;

@interface IESECLiveCouponWidget : IESECLiveBaseWidget <IESECLiveMessageSubscriber, IESECLiveCouponRouter>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *animationView;
@property (retain, nonatomic) UIView<IESECLivePluginLayoutView> *shortTouchIconView;
@property (nonatomic) BOOL isHorizontalOrientation;
@property (copy, nonatomic) NSDictionary *couponEntranceData;
@property (copy, nonatomic) NSString *applyCouponID;
@property (copy, nonatomic) NSString *previewCouponID;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *peakReduce;
@property (weak, nonatomic) id<IESECLiveShortTouchItem> currentShortTouchItem;
@property (retain, nonatomic) NSDictionary *shortTouchCouponInfo;
@property (retain, nonatomic) id<AnnieLiveBizCardProviderProtocol> annieXCardProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeXBridgeEvent:(id)a0 callback:(id /* block */)a1;
- (BOOL)NAShortTouchCouponDisabled;
- (void)widgetMount;
- (void)widgetUnmount;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)widgetOrientationWillChange:(long long)a0;
- (void)handleAfterActuallyEnterRoom;
- (void)p_constructMessage;
- (long long)autoApplyCouponType;
- (void)refreshCouponInfoWhenAutoApplySuccess:(id)a0;
- (void)openApplyCouponViewWithCouponID:(id)a0;
- (void)openApplyCouponViewWithCouponID:(id)a0 params:(id)a1;
- (void)asyncReceivedLynxEvent:(id)a0 withParams:(id)a1;
- (void)p_removeAllCoupon;
- (void)p_removeMiniCouponView;
- (void)showCouponEntranceIfNeeded;
- (BOOL)shouldShowCouponEntrance;
- (BOOL)shouldAutoApplyCoupon;
- (BOOL)hasCouponInLiveRoom;
- (id)lynxRoomParams;
- (id)dialogLegouURLString;
- (void)showLynxDialogViewWithURLString:(id)a0 params:(id)a1;
- (id)dialogURLString;
- (void)p_setupAutoApplyCouponID;
- (void)openApplyCouponViewIfNeeded;
- (void)p_setupPreviewCouponID;
- (void)requestCouponEntrance:(BOOL)a0;
- (void)p_removeCouponView;
- (void)loadCouponEntranceLynxView;
- (id)lynxViewWithURLString:(id)a0 preferredFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)entryURLString;
- (void)receivedLynxEvent:(id)a0 withParams:(id)a1;
- (void)showCouponEntrance:(id)a0;
- (void)p_updateCouponInfo:(id)a0;
- (BOOL)needShowCouponEntrance:(id)a0;
- (void)showCouponEntranceWithOutAnimation:(id)a0;
- (void)refreshShortTouchData:(id)a0;
- (void)startShowIconAnimation:(id)a0 callback:(id /* block */)a1;
- (id)lynxURLConfig;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)iconURLString;

@end
