@class IESECLiveRoomContext, IESECLiveShopCartService, NSString, IESECQualityInfoV2, IESECLiveShopCartMonitor;
@protocol IESECLiveShopCartControlDelegate, IESECLiveShopCartInfoService;

@interface IESECLiveShopCartControl : NSObject <IESECLiveShopCartMonitorDataSource, IESECLiveShopCartControl>

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (retain, nonatomic) IESECLiveShopCartService *shopCartService;
@property (retain, nonatomic) IESECLiveShopCartMonitor *shopCartMonitor;
@property (weak, nonatomic) id<IESECLiveShopCartInfoService> dataSource;
@property (weak, nonatomic) id<IESECLiveShopCartControlDelegate> delegate;
@property (nonatomic) BOOL useQuickEnterShowCart;
@property (nonatomic) BOOL needHandleCartExceptShowIcon;
@property (nonatomic) BOOL isCartIconPreloaded;
@property (nonatomic) BOOL hasTryHandleAutoOpen;
@property (nonatomic) BOOL onEnterTracked;
@property (nonatomic) BOOL onEnterTrackedV2;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (nonatomic) BOOL hasAuthorityOnEnter;
@property (nonatomic) BOOL hasAuthorityCurrent;
@property (nonatomic) BOOL roomCartValid;
@property (nonatomic) BOOL showCart;
@property (nonatomic) BOOL toolbarConsistentWithRoomCart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isShopCartFlagExistInRoom;
@property (readonly, nonatomic) BOOL isShopCartFlagExist;
@property (readonly, nonatomic) BOOL isShopCartItemExist;
@property (readonly, nonatomic) BOOL isShopCartValidShowing;
@property (readonly, nonatomic) BOOL enableEcommerce;
@property (readonly, nonatomic) BOOL shouldDoAnimation;
@property (nonatomic) double cartBeginShowTimeOnEnter;

- (BOOL)isExcitation;
- (id)curBtmModel;
- (void)didEnterRoomWithDataSource:(id)a0 delegate:(id)a1;
- (void)updateStatusWithMsgType:(id)a0 msgID:(id)a1;
- (void)toolbarUpdateStatus:(long long)a0 extraInfo:(id)a1;
- (void)handleShopCartAfterActuallyEnterRoom;
- (void)handleOrientationIfNeeded;
- (void)updateThemeImage:(id)a0;
- (BOOL)playStupidAnimation;
- (void)updateShopCartItem:(id)a0;
- (void)stopStupidAnimation;
- (void)qualityInfoInit;
- (void)p_handleCartClickAllAction;
- (BOOL)p_toolbarWhetherConsistentWithRoomCart;
- (void)p_handleShopCartServiceOnEnterRoom;
- (void)p_onlyHandleIcon:(BOOL)a0;
- (void)p_showCart:(BOOL)a0 onEnter:(BOOL)a1;
- (void)p_onlyHandleIconHide;
- (void)p_showShopCart:(BOOL)a0;
- (void)p_hideShopCart;
- (void)p_delegateOnEnterShowCart:(BOOL)a0;
- (void)p_handleCartAppearOnEnter:(BOOL)a0;
- (id)getCurrentSchemaParamsForTrack;
- (void)p_handleCartClick;
- (id)toolbarItemIdentifiers;
- (id)tracker;
- (void).cxx_destruct;
- (id)router;
- (id)initWithRoomContext:(id)a0;

@end
