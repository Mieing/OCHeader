@class IESECServiceProxy, UIImageView, NSString;
@protocol IESECShopDataService, IESECShopLayoutService;

@interface IESECShopCloseUpController : IESECShopControllerV2 <IESECShopCloseUpController>

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) UIImageView *fullSkeletonView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBindings;
- (void)controllerDidLoad;
- (void).cxx_destruct;

@end
