@class IESECPdpHeaderLynxPendantView, NSString;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderViewManagerServeice;

@interface IESECGoodsDetailHeaderLynxPendantComponent : IESECGoodsDetailHeaderFeatureComponent <IESECGoodsDetailViewUpdateMessage>

@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (retain, nonatomic) IESECPdpHeaderLynxPendantView *pendantView;
@property (nonatomic) long long nowPage;
@property (nonatomic) unsigned long long nowVideoState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponent;
- (void)goodsDetailUpdateHeaderLynxPendant:(id)a0 goodsDetailUID:(id)a1;
- (void)headerViewDidScrollToMode:(long long)a0;
- (void)headerViewDidLoad;
- (void)registerSelfService;
- (void).cxx_destruct;

@end
