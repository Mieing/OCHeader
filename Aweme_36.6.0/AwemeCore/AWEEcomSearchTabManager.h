@class AWEEcommerceDynamicTabResponseModel, NSArray, NSMutableDictionary, NSString, NSDictionary, AWEEcomSearchStateStore;
@protocol AWEEcomSearchTabManagerDelegate, AWEEcomSearchChildVCConstructorVisitor;

@interface AWEEcomSearchTabManager : NSObject <AWEEcomSearchTabManagerProtocol>

@property (readonly, nonatomic) NSArray *trackSearchTabList;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableDictionary *tabToTabFeedViewControllerMap;
@property (retain, nonatomic) AWEEcommerceDynamicTabResponseModel *ecomtabResponseModel;
@property (copy, nonatomic) NSString *initialTab;
@property (readonly, nonatomic) long long initialIndex;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *selectedTab;
@property (readonly, nonatomic) long long numberOfTabs;
@property (copy, nonatomic) NSArray *tabModels;
@property (copy, nonatomic) NSDictionary *redPointShowDict;
@property (weak, nonatomic) id<AWEEcomSearchTabManagerDelegate> delegate;
@property (weak, nonatomic) id<AWEEcomSearchChildVCConstructorVisitor> childVCConstructorVisitor;
@property (copy, nonatomic) NSDictionary *initialParams;
@property (retain, nonatomic) AWEEcomSearchStateStore *searchStateStore;
@property (retain, nonatomic) NSMutableDictionary *tabLogPassback;
@property (readonly, copy, nonatomic) NSArray *dynamicTabModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentVCStringForSearchTabType:(unsigned long long)a0;
+ (BOOL)enableTabVCLazyLoad;
+ (BOOL)enableReduceTabRequest;

- (id)initWithType:(unsigned long long)a0 andInitialParams:(id)a1 paramsBuilder:(id /* block */)a2;
- (long long)indexOfTabType:(unsigned long long)a0;
- (id)tabFeedViewControllerAtIndex:(long long)a0;
- (id)tabOfTabFeedViewController:(id)a0;
- (unsigned long long)tabTypeAtIndex:(long long)a0;
- (id)tabTitles;
- (BOOL)shouldRequestFetchTabWithParams:(id)a0;
- (void)updateEcommerceSearchTabsWithTabModels:(id)a0;
- (long long)indexOfTab:(id)a0;
- (id)_loadEcommerceTabModels;
- (id)p_generalEcommerceTabVC:(id)a0;
- (id)makeViewControllerWithParams:(id)a0 forKey:(id)a1;
- (id)tabForTabType:(unsigned long long)a0;
- (unsigned long long)tabTypeOfTab:(id)a0;
- (id)makeMerchandiseViewController:(id)a0;
- (id)makeEcomLiveViewController:(id)a0;
- (id)makeBigSaleViewController:(id)a0;
- (id)makeEcomContentViewController:(id)a0;
- (id)makeInstantViewController:(id)a0;
- (id)makeListViewController:(id)a0;
- (void).cxx_destruct;
- (id)tabAtIndex:(long long)a0;
- (void)forwardInvocation:(id)a0;

@end
