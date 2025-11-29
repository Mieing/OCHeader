@class UIView, IESECGoodsDetailCommonMeta, NSString, IESECDurationHelper, IESECSKUShowRequest, IESECGoodsDetailPageContext, NSDictionary, IESECGoodsDetailSKUManager, IESECGoodsDetailBottomMetaModel, IESECSKUDetailContext, NSNumber;
@protocol IESECSKUViewProtocol, IESECGoodsDetailContainerProtocol;

@interface IESECGoodsDetailSKUPageViewController : UIViewController <IESECSKUViewDelegate, IESECGoodsDetailPopoverContentProtocol, IESECSKUViewControllerProtocol, IESECSKUViewAppearance>

@property (retain, nonatomic) IESECSKUShowRequest *showRequest;
@property (retain, nonatomic) UIView<IESECSKUViewProtocol> *skuView;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) NSNumber *couponMinPrice;
@property (retain, nonatomic) IESECDurationHelper *stay;
@property (retain, nonatomic) IESECGoodsDetailPageContext *pageContext;
@property (retain, nonatomic) IESECGoodsDetailCommonMeta *commonMeta;
@property (retain, nonatomic) IESECGoodsDetailBottomMetaModel *bottomMeta;
@property (retain, nonatomic) IESECGoodsDetailSKUManager *skuManager;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *closeMethod;
@property (copy, nonatomic) NSString *previousPageName;
@property (copy, nonatomic) NSDictionary *extraLogParams;
@property (copy, nonatomic) NSDictionary *entranceInfoExtraParams;

+ (void)skuInfoToCart:(id)a0 addToCartMeta:(id)a1 openWithSaaS:(BOOL)a2 completion:(id /* block */)a3;

- (id)commonMonitorParams;
- (void)embedInContainer:(id)a0;
- (void)confirmClick:(id)a0 skuInfo:(id)a1 couponId:(id)a2;
- (void)addToCartClick:(id)a0 skuInfo:(id)a1;
- (void)selectedSpecsChanged:(id)a0 skuInfo:(id)a1;
- (void)skuNumChanged:(id)a0 skuInfo:(id)a1;
- (void)openSimpleURL:(id)a0 skuInfo:(id)a1;
- (void)skuViewDidShow:(id)a0;
- (void)skuViewWillDismiss:(id)a0 closeType:(long long)a1;
- (void)skuViewDidDismiss:(id)a0 closeType:(long long)a1;
- (void)dismissCurrentPopoverWithCompletion:(id /* block */)a0;
- (double)popoverContentHeight;
- (void)showWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)containerWillDismissContentPopover;
- (void)dismissCurrentVC;
- (BOOL)p_isFullScreen;
- (id)specIDsFromSkuManager;
- (void)showGoodsDetailHeaderReportButtonIfNeeded;
- (void)dismissVCFromSuperVC;
- (void)trackEnterPageBeginWithAction:(id)a0 categoryParams:(id)a1;
- (void)trackDuration:(id)a0 forAction:(id)a1 categoryParams:(id)a2;
- (void)trackEnterPageWithAction:(id)a0 success:(BOOL)a1 categoryParams:(id)a2 code:(id)a3 message:(id)a4;
- (void)p_storeUserClickActionWithSKUInfo:(id)a0;
- (void)storeUserActionWithSelectedIDs:(id)a0 selectedSKUID:(id)a1 selectedCount:(id)a2;
- (id)initWithPageContext:(id)a0 commonMeta:(id)a1 bottomMeta:(id)a2 skuManager:(id)a3 extraInfo:(id)a4;
- (void)dismissWithAnimation:(id /* block */)a0 completion:(id /* block */)a1;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end
