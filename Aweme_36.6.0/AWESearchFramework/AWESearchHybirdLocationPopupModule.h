@class NSString;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybirdLocationPopupModule : AWESearchBaseContainerService <AWEUserMessage, AWESearchVerticalServiceProtocol>

@property (nonatomic) BOOL isCardCountShowPopupClose;
@property (nonatomic) BOOL isSearchState;
@property (nonatomic) BOOL isLocationPopupShow;
@property (copy, nonatomic) NSString *popupPermissionImageGuideName;
@property (copy, nonatomic) NSString *popupServiceImageGuideName;
@property (nonatomic) long long popupFrequencyTimeDay;
@property (nonatomic) long long popupFrequencyCount;
@property (nonatomic) long long feedCardShowCount;
@property (copy, nonatomic) NSString *currentConversationID;
@property (copy, nonatomic) NSString *currentSearchId;
@property (copy, nonatomic) NSString *preSearchId;
@property (nonatomic) BOOL isFeedFirstFresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (BOOL)enableNewAISearchModules;
+ (id)moduleName;

- (void)willStartLogin;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)customComponentWillDisplay:(id)a0 withViewModel:(id)a1;
- (void)newAISearchAPPLocationPopupShow;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)searchAppLocationPopup;
- (id)homePageViewControllerCert;
- (void)locationPopupShowIfNeededWithEnterFrom:(id)a0 cert:(id)a1;
- (id)resultViewControllerCert;
- (id)locationServiceConfig;
- (void)reAnswerWithLocationSuccess;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;

@end
