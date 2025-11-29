@class IESECServiceProxy, NSArray, NSString;
@protocol IESECShopFrameworkService;

@interface IESECShopTopTabService : IESECShopService <IESECShopTopTabService>

@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (readonly, nonatomic) BOOL shouldHideTopTab;
@property (readonly, nonatomic) unsigned long long topTabBarPosition;
@property (copy, nonatomic) NSArray *topTabsModels;
@property (copy, nonatomic) NSString *lightStyleTextColor;
@property (copy, nonatomic) NSString *indicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
