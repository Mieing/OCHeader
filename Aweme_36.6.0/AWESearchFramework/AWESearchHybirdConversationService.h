@class AWESearchHybridConversationManager, NSString;
@protocol AWESearchResultVerticalBaseViewControllerProtocol, AWESearchServiceManagerProtocol, AWESearchHomePageHybridViewControllerProtocol;

@interface AWESearchHybirdConversationService : AWESearchBaseContainerService <AWESearchHybridHomePageServiceProtocol>

@property (retain, nonatomic) AWESearchHybridConversationManager *conversationManager;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol, AWESearchHomePageHybridViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logAlog:(id)a0;
+ (id)getAWESearchHPHistoryQueryModelString:(id)a0;
+ (id)moduleName;

- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_selectHistoryWithQuery:(id)a0;
- (void)searchHybird_transToDetailPageWithQuery:(id)a0 params:(id)a1;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (void)searchHome_quitSearchWithReason:(long long)a0;
- (id)currentServiceManager;
- (void)transToResultPageWithKeyword:(id)a0 conversationID:(id)a1 searchID:(id)a2 timeStamp:(double)a3 image:(id)a4 extra:(id)a5;
- (void)transToResultPageWithAigcParams:(id)a0 query:(id)a1;
- (void)transToResultPageWithKeyword:(id)a0 conversationID:(id)a1 searchID:(id)a2 timeStamp:(double)a3 image:(id)a4;
- (void)bindConversationID:(id)a0 andSearchID:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
