@class NSString, NSDictionary, AWESearchHomeNewStyleSearchBarQueryContext;
@protocol AWESearchServiceManagerProtocol, AWESearchResultVerticalBaseViewControllerProtocol;

@interface AWESearchHybirdLogSearchEventModule : AWESearchBaseContainerService <AWESearchVerticalServiceProtocol>

@property (retain, nonatomic) AWESearchHomeNewStyleSearchBarQueryContext *query;
@property (copy, nonatomic) NSString *currentConversationID;
@property (copy, nonatomic) NSString *currentSearchId;
@property (copy, nonatomic) NSString *preSearchId;
@property (copy, nonatomic) NSString *preSearchQuery;
@property (copy, nonatomic) NSDictionary *logPbData;
@property (copy, nonatomic) NSString *isSuccess;
@property (nonatomic) double enterSearchModeTimeStamp;
@property (nonatomic) BOOL hasReportShow;
@property (weak, nonatomic) id<AWESearchResultVerticalBaseViewControllerProtocol> container;
@property (weak, nonatomic) id<AWESearchServiceManagerProtocol> serviceManager;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceName;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (id)moduleName;

- (void)searchHybird_aiStreamReceiveFirstDataWithConversationID:(id)a0 isReAnswer:(BOOL)a1 searchID:(id)a2 extra:(id)a3;
- (void)searchHybird_willStartSSESearchWithQuery:(id)a0 card:(id)a1;
- (void)searchHybird_currentConversationWillEndWithConversationID:(id)a0;
- (void)searchHybrid_willLeaveSearchModeWithLeaveType:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)currentEnterFrom;
- (id)currentServiceManager;
- (void)logSearch;
- (void)logEnterSearchMode;
- (void)logSearchStayDuration:(id)a0;
- (id)fetchCurrentDataSource;
- (id)currentEnterFromSearchMoment;
- (id)currentBtm;
- (void).cxx_destruct;
- (id)init;

@end
