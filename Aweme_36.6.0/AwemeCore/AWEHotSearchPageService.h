@class NSString, AWESearchDecoratorCombineBusiness;
@protocol AWESearchResultVerticalBaseViewControllerProtocol, AWESearchServiceManagerProtocol, AWEGeneralSearchPublishEntranceManagerProtocol;

@interface AWEHotSearchPageService : NSObject <AWESearchGeneralSearchServiceProtocol, AWEGeneralHotSearchPageServiceProtocol>

@property (nonatomic) BOOL hasShowHotSpotWidgetGuide;
@property (retain, nonatomic) id<AWEGeneralSearchPublishEntranceManagerProtocol> publishEntryManager;
@property (retain, nonatomic) AWESearchDecoratorCombineBusiness *decoratorBusiness;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI;
- (void)feedDidScroll:(id)a0;
- (BOOL)isTrendingPage;
- (void)p_triggerAppearAnimForHotSearchBottomButtonWithOffset:(struct CGPoint { double x0; double x1; })a0 publishEntryManager:(id)a1;
- (void)p_registerWidgetEvent;
- (id)bottomBarConfig;
- (id)hotSpotAdditionalInfo;
- (id)hotSearchBusinessViewController;
- (void)chunkHandleReplaceResponse:(id)a0 allowShow:(BOOL)a1 rootModel:(id)a2 useCSP2:(BOOL)a3 chunkIndex:(long long)a4;
- (void)willFetchData;
- (void)updateGlobalUIForRefresh:(BOOL)a0;
- (void).cxx_destruct;

@end
