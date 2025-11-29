@class IESECServiceProxy, NSString, IESECShopTabModel;
@protocol IESECShopFrameworkService, IESECShopLayoutService, IESECShopDataService, IESECShopForwardCoService, IESECShopEventService;

@interface IESECShopStateService : IESECShopService <IESECShopStateService>

@property (nonatomic) unsigned long long scrollState;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFrameworkService> *frameworkService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopForwardCoService> *forwardCoService;
@property (readonly, nonatomic) unsigned long long modal;
@property (nonatomic) unsigned long long screenState;
@property (readonly, nonatomic) unsigned long long themeType;
@property (readonly, nonatomic) unsigned long long headerType;
@property (readonly, nonatomic) unsigned long long liveInitialState;
@property (retain, nonatomic) IESECShopTabModel *preTabModel;
@property (retain, nonatomic) IESECShopTabModel *currentTabModel;
@property (retain, nonatomic) IESECShopTabModel *currentBottomTabModel;
@property (retain, nonatomic) NSString *scene;
@property (readonly, nonatomic) BOOL headerSwitching;
@property (readonly, nonatomic) BOOL shouldShowHeaderLive;
@property (readonly, nonatomic) BOOL shouldShowHeaderVideo;
@property (copy, nonatomic) id /* block */ headerSwitchAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configRouterParams:(id)a0;
- (BOOL)switchThemeType:(unsigned long long)a0;
- (void)updateScrollState;
- (void)switchScrollState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)switchScrollState:(unsigned long long)a0 animated:(BOOL)a1 animationType:(unsigned long long)a2;
- (void)resetHeaderType;
- (void)setupInitialHeaderType;
- (void)switchHeaderType:(unsigned long long)a0;
- (unsigned long long)preprocessHeaderType:(unsigned long long)a0;
- (void)setupModal:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
