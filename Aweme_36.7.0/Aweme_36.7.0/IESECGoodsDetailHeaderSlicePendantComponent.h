@protocol IESECGoodsDetailHeaderViewManagerServeice;

@interface IESECGoodsDetailHeaderSlicePendantComponent : IESECGoodsDetailHeaderFeatureComponent

@property (weak, nonatomic) id<IESECGoodsDetailHeaderViewManagerServeice> viewManager;

- (void)loadComponent;
- (void)headerViewWillLoad;
- (void)headerViewDidLoad;
- (void)registerSelfService;
- (void).cxx_destruct;

@end
