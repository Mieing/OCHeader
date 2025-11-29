@class NSString, IESECGoodsDetailHeaderPendantModel, IESECGoodsDetailHeaderServiceProvider;
@protocol IESECGoodsDetailHeaderContainerService;

@interface IESECGoodsDetailHeaderFeatureComponent : NSObject <IESECGoodsDetailHeaderFeatureComponent>

@property (weak, nonatomic) IESECGoodsDetailHeaderServiceProvider *serviceProvider;
@property (weak, nonatomic) id<IESECGoodsDetailHeaderContainerService> container;
@property (retain, nonatomic) IESECGoodsDetailHeaderPendantModel *model;
@property (nonatomic) long long mode;
@property (nonatomic) double headerViewWidth;
@property (nonatomic) long long padSplitMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadComponent;
- (void)headerViewWillLoad;
- (void)headerViewDidScrollToMode:(long long)a0;
- (void)headerViewDidLoad;
- (void)registerSelfService;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
