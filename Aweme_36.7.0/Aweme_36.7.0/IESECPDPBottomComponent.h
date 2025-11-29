@class IESECLLDCLynxManager, NSMutableDictionary, IESECGoodsDetailBottomModel, IESECGoodsDetailBottomContainer, IESECGoodsDetailSliceManager, NSString;
@protocol IESECPDPContainerService;

@interface IESECPDPBottomComponent : IESECPDPBaseComponent <IESECPDPBottomService, IESECGoodsDetailBottomContainerDelegate, IESECGoodsDetailViewUpdateMessage, IESECommerceAddGoodsToCartMessage>

@property (nonatomic) long long cartNum;
@property (weak, nonatomic) IESECGoodsDetailSliceManager *sliceManager;
@property (retain, nonatomic) IESECGoodsDetailBottomModel *bottomModel;
@property (retain, nonatomic) NSMutableDictionary *containerData;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (retain, nonatomic) IESECGoodsDetailBottomContainer *bottomContainerView;
@property (weak, nonatomic) id<IESECPDPContainerService> container;
@property (nonatomic) BOOL isNotPageFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double extraHeight;

- (void)loadComponent;
- (void)setupBase;
- (id)cartView;
- (void)registerJSB;
- (void)acceptShoppingCartNumberChanged:(id)a0 style:(unsigned long long)a1;
- (void)acceptShoppingCartNumberChanged:(id)a0 style:(unsigned long long)a1 pageIdentifier:(id)a2;
- (void)rebind;
- (void)goodsDetailLynxViewNeedUpdateWithParams:(id)a0 goodsDetailUID:(id)a1;
- (void)goodsDetailBottomViewNeedUpdatedWithGoodsDetailUID:(id)a0;
- (void)goodsDetailLynxTipViewSizeChange:(id)a0 lynxID:(id)a1;
- (void)loadAfterThreeRunloopWithGoodsDetailUID:(id)a0;
- (void)sendPageVisibilityEvent:(BOOL)a0;
- (double)cartOffsetX;
- (double)currentBottomHeight;
- (BOOL)hasInstLynxBottom;
- (void)updateLayoutWithBottomContainer:(id)a0;
- (id)bottomPdpSlcView;
- (void)sendRefreshMarketCartMessage;
- (void)containerDidRender;
- (void)preloadBack;
- (void)packApiBack;
- (void)registerSelfService;
- (void)resetBaseModel;
- (void)clearBottomContainerView;
- (void)handleSliceShowAction;
- (void)viewDidAppear;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)rebuild;
- (double)containerWidth;

@end
