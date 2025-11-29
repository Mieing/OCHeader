@class UIView, NSString, IESECGoodsDetailHeaderTabComponentData;
@protocol IESECGoodsDetailHeaderStorageService, IESECGoodsDetailHeaderEventHandlerService, IESECGoodsDetailHeaderViewManagerServeice, IESECGoodsDetailHeaderTabViewProtocol, IESECGoodsDetailHeaderTrackerService;

@interface IESECGoodsDetailHeaderTabComponent : IESECGoodsDetailHeaderFeatureComponent <IESECGoodsDetailHeaderTabViewDelegate, IESECGoodsDetailTabViewService>

@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *rawData;
@property (retain, nonatomic) IESECGoodsDetailHeaderTabComponentData *unexpandedData;
@property (retain, nonatomic) UIView<IESECGoodsDetailHeaderTabViewProtocol> *tabView;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderTrackerService> tracker;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderStorageService> storage;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderEventHandlerService> handler;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIndex:(unsigned long long)a0;
- (void)loadComponent;
- (void)headerViewWillLoad;
- (void)headerViewDidScrollToMode:(long long)a0;
- (void)headerViewDidLoad;
- (void)registerSelfService;
- (void)hideTabView;
- (void)updateTabViewHidden:(unsigned long long)a0;
- (void)reloadTabView;
- (void)makeConstraintsForTabView:(id)a0;
- (void)trackClickAndDraw:(unsigned long long)a0 tabIndex:(unsigned long long)a1;
- (void)showTabView;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)data;

@end
