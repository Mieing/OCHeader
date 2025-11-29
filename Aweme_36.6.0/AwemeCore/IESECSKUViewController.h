@class UIView, NSString, IESECDurationHelper, IESECGoodsDetailTracker, IESECSKUShowRequest, NSDictionary, IESECGoodsDetailParameters, IESECSKUDetailContext, NSNumber;
@protocol IESECSKUViewProtocol, IESECGoodsDetailContainerProtocol;

@interface IESECSKUViewController : UIViewController <IESECSKUViewDelegate, IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol, IESECSKUViewAppearance>

@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECGoodsDetailParameters *params;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) BOOL isAddToCart;
@property (retain, nonatomic) NSNumber *couponMinPrice;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) IESECDurationHelper *stay;
@property (retain, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *closeMethod;
@property (copy, nonatomic) NSString *previousPageName;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSDictionary *entranceInfoExtraParams;

+ (void)skuInfoToCart:(id)a0 completion:(id /* block */)a1;
+ (id)skuDetailContextWithParameters:(id)a0 isAddToCart:(BOOL)a1 previousPageName:(id)a2 actionType:(long long)a3 isFullScreen:(BOOL)a4 extraLogParams:(id)a5 entranceInfoExtraParams:(id)a6 extraParams:(id)a7;

- (id)detailContext;
- (void)embedInContainer:(id)a0;
- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)selectedSpecsChanged:(id)a0 skuInfo:(id)a1;
- (void)openSimpleURL:(id)a0 skuInfo:(id)a1;
- (void)skuViewDidDismiss:(id)a0 closeType:(long long)a1;
- (void)dismissCurrentPopoverWithCompletion:(id /* block */)a0;
- (double)popoverContentHeight;
- (void)showWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)containerWillDismissContentPopover;
- (id)showRequest;
- (void)dismissCurrentVC;
- (id)initWithParameters:(id)a0 isAddToCart:(BOOL)a1 actionType:(long long)a2 extraParams:(id)a3;
- (void)storeUserActionWithSelectedIDs:(id)a0 selectedSKUID:(id)a1 selectedCount:(id)a2;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
