@class AWESearchHomeNewStyleSearchBarQueryContext, NSString, AWESearchHPHistoryConversationModel, AWESearchHistoryComponent;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybirdHistoryModule : AWESearchBaseContainerService <AWESearchHybirdHistoryJSBHandlerProtocol, AWEUserMessage, AWESearchVerticalServiceProtocol>

@property (weak, nonatomic) AWESearchHistoryComponent *historyComponent;
@property (copy, nonatomic) id /* block */ getHistoryJSBCompletion;
@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarQueryContext *currentQueryContext;
@property (retain, nonatomic) AWESearchHPHistoryConversationModel *reanswerableConv;
@property (copy, nonatomic) id /* block */ executionAfterReceiveAllData;
@property (nonatomic) long long currentQuerySendTime;
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
+ (id)moduleName;

- (void)didFinishLoginWithUid:(id)a0;
- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_aiStreamFinishedReceiveDataWithConversationID:(id)a0 searchID:(id)a1;
- (void)searchHybird_setSearchHistoryComponent:(id)a0;
- (void)searchHybird_willStartSSESearchWithQuery:(id)a0 card:(id)a1;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (void)searchHybrid_willStartGeneralSearchWithQuery:(id)a0;
- (void)searchHybrid_generalSearchDidReceiveFirstResponseWithSearchID:(id)a0;
- (void)searchHybrid_historySideBarWillShow;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (BOOL)isUseSSEDirect;
- (id)currentServiceManager;
- (void)updateHistoryHighlightQuery;
- (void)syncCurrentSelectToFE:(id)a0;
- (id)findQueryModelWithTreeStructV4:(id)a0;
- (id)findQueryModelWithTreeStructV3:(id)a0;
- (BOOL)isBreakpointResume:(id)a0;
- (id)getHistoryJSBResultModelFromResponse:(id)a0;
- (void)syncUserLoginEventToFE;
- (void)callDeleteSingleHistoryMethodWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)callGetHistoryMethodWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)callSelectHistoryMethodWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
