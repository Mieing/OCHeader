@class IESECXBridgeEventSubscriber, NSArray, IESECLiveContext, NSString, UIView, IESECSKUShowRequest, IESECLiveSKUCreateInfo;
@protocol IESECSKUViewProtocol, IESECLiveSKUViewDelegate;

@interface IESECLiveSKUView : UIView <IESECSKUViewDelegate>

@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) IESECLiveSKUCreateInfo *skuCreateInfo;
@property (nonatomic) BOOL operateDirectly;
@property (retain, nonatomic) NSArray *selectIds;
@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *realSKUView;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (weak, nonatomic) id<IESECLiveSKUViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)generateSKUInfoWithGoods:(id)a0 eventParams:(id)a1 openWithSaaS:(BOOL)a2 completion:(id /* block */)a3;

- (id)ecomEntranceForm;
- (id)goodsModel;
- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)selectedSpecsChanged:(id)a0 skuInfo:(id)a1;
- (void)backClick:(id)a0 skuInfo:(id)a1;
- (BOOL)shouldClosePanelWithCloseType:(long long)a0;
- (void)detailClick:(id)a0 skuInfo:(id)a1;
- (void)openCouponPanel:(id)a0 skuInfo:(id)a1;
- (void)openSimpleURL:(id)a0 skuInfo:(id)a1;
- (id)businessContext;
- (id)coreParams;
- (id)jumpHandler;
- (id)initWithCreateInfo:(id)a0 liveContext:(id)a1;
- (BOOL)isAddToCart;
- (id)createShowRequestWithAddToCart:(BOOL)a0 selectIds:(id)a1;
- (void)p_closeWithCompletion:(id /* block */)a0 closeType:(long long)a1;
- (void)commitOrderWithParams:(id)a0;
- (void)goOrderPageWithSKUInfo:(id)a0;
- (void)commoditySKUTopDetailClickWithBTMToken:(id)a0;
- (void)couponPanelShowInSuperView:(id)a0 withData:(id)a1 goodsModel:(id)a2 btmToken:(id)a3;
- (void)openSimpleURL:(id)a0;
- (void)closeSKU:(BOOL)a0 withComletion:(id /* block */)a1;
- (void)updateJumpTrackInfoForRequest:(id)a0;
- (id)p_generateSKUInfoWithSKUID:(id)a0;
- (void)handleMaskTap;
- (void)updateSKUInfo:(id)a0;
- (id)tracker;
- (void).cxx_destruct;
- (void)showWithCompletion:(id /* block */)a0;
- (void)closeWithCompletion:(id /* block */)a0;

@end
