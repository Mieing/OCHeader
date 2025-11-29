@class NSDictionary, NSArray, AWEDicoverySearchManager, AWEContactsManager, NSString, NSObject, NSMutableArray;
@protocol IESIMSearchEngineProtocol, AFDMentionAilabDefaultUserListDataControllerProtocol, OS_dispatch_group;

@interface AFDMentionUserPickerContactDatasource : NSObject <AFDMentionUserPickerContactDatasourceProtocol>

@property (retain, nonatomic) AWEContactsManager *contactManager;
@property (retain, nonatomic) AWEDicoverySearchManager *searchManager;
@property (retain, nonatomic) NSObject<AFDMentionAilabDefaultUserListDataControllerProtocol> *ailabDefaultUserListDataController;
@property (retain, nonatomic) NSArray *recentDatasource;
@property (retain, nonatomic) NSArray *friendDatasource;
@property (retain, nonatomic) NSArray *contactDatasource;
@property (retain, nonatomic) NSArray *localSearchDataSource;
@property (retain, nonatomic) NSArray *remoteSearchDataSource;
@property (retain, nonatomic) NSArray *remoteSugDataSource;
@property (copy, nonatomic) NSString *remoteSearchKeyword;
@property (nonatomic) BOOL sugHasMore;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (nonatomic) long long scene;
@property (retain, nonatomic) NSMutableArray *searchUserList;
@property (retain, nonatomic) NSArray *defaultUserList;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *searchGroup;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) NSMutableArray *ailabDefaultDataSource;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) id /* block */ fetchListCompletion;
@property (copy, nonatomic) id /* block */ sugSearchCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent;
- (void)p_setupSearchEngine;
- (void)p_fetchLocalDataSourceWithCompletion:(id /* block */)a0;
- (id)p_fillRecentDatasource:(id)a0 withDataIfNeeded:(id)a1;
- (void)startSearchWithKeyword:(id)a0;
- (void)searchUserWithKeyword:(id)a0;
- (void)fetchDataWithCompletion:(id /* block */)a0;
- (void)p_search:(id)a0;
- (void)searchMore;
- (void)p_fetchDataWithAilabDefaultUserListDataControllerWithCompletion:(id /* block */)a0;
- (void)p_fetchDataWithAilabDefaultUserListDataControllerIfLoadMore:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)p_fetchRemoteSearchData:(BOOL)a0;
- (void)p_fetchDataWithContactManagerWithCompetion:(id /* block */)a0;
- (id)p_getNotSelfList:(id)a0;
- (id)p_getFriendList:(id)a0;
- (id)p_fastCombineListA:(id)a0 withDeduplicatedListB:(id)a1;
- (id)p_generateSugContextIsLoadMore:(BOOL)a0;
- (id)p_convertAwemeUserToIMUser:(id)a0;
- (void)p_updateLogPassback:(id)a0;
- (void)p_fillSugDataWithResponseList:(id)a0;
- (BOOL)p_isSearchMode;
- (void)p_fetchSearchListWithLoadMore:(BOOL)a0;
- (void)p_fetchDiscoverSearchAPIWithCompletion:(id /* block */)a0;
- (id)p_combineListA:(id)a0 withDeduplicatedListB:(id)a1;
- (void)p_fetchLocalContactDBWithCompletion:(id /* block */)a0;
- (id)p_convertSearchUserToIMUser:(id)a0;
- (void)fetchSearchLoadmoreData;
- (BOOL)isSearchListContainUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (id)initWithScene:(long long)a0;

@end
