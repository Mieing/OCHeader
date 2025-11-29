@class NSString, NSArray, AWERelationFollowCleanListDataController;

@interface AWERelationFollowCleanListViewModel : AWEBaseViewModel <AWEUserMessage>

@property (retain) AWERelationFollowCleanListDataController *dataController;
@property (copy) NSString *headerLabelString;
@property BOOL isRefresing;
@property BOOL firstLoading;
@property (retain) NSArray *cleanList;
@property BOOL hasMore;
@property long long total;
@property BOOL needReloadData;
@property (copy) NSString *hotsoonText;
@property long long vcdCount;
@property long long hotsoonHasMore;
@property BOOL loadingShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)__updateDataSourceWithType:(long long)a0 userID:(id)a1 object:(id)a2 needResetAlias:(BOOL)a3;
- (void)fetchData:(BOOL)a0;
- (void)resetStatusWhenNetworkDisconnected;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
