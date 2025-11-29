@class NSArray, NSString, NSError, NSObject;
@protocol AWEConcernSkylightContainerProtocol;

@interface AWEConcernUpdateElement : NSObject <AWEConcernRecentUpdateUnreadListPageHandlerProtocol, AWEConcernFollowListUnreadCacheMessage, AWEConcernSkylightElementProtocol>

@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) NSObject<AWEConcernSkylightContainerProtocol> *skylightContainer;
@property (retain, nonatomic) NSArray *highValueUserList;
@property (retain, nonatomic) NSArray *realShowUserList;
@property (nonatomic) long long totalUnreadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreate;
+ (id)generateWithSkylightContainer:(id)a0 dataController:(id)a1;
+ (id)validUserListWithUserList:(id)a0;
+ (void)saveUnreadNumWithUserList:(id)a0;
+ (id)elementKey;

- (id)headerConfig;
- (void)followListUnreadCacheDidChangeWithUserID:(id)a0 deleteItemIDs:(id)a1;
- (id)currentUnreadUserIDList;
- (BOOL)noMoreUserData;
- (void)loadMoreUnreadUserWithCompletion:(id /* block */)a0;
- (id)userModelWithUserID:(id)a0;
- (BOOL)removeDataSourceWithUserID:(id)a0;
- (void)refreshWithNeedHandleData:(BOOL)a0 complete:(id /* block */)a1;
- (void)clearDataSource;
- (BOOL)shouldShowSkylight;
- (BOOL)shouldShowEmptyInSkylight;
- (struct CGSize { double x0; double x1; })itemSizeWithIndex:(long long)a0 cellModel:(id)a1;
- (void)willDisplayCellWithCellModel:(id)a0;
- (void)didSelectItemAtIndexPath:(id)a0 cellModel:(id)a1;
- (BOOL)removeDataSourceWithUser:(id)a0;
- (id)cellModelsWithUserList:(id)a0;
- (void)enterUnreadListPageWithUserModel:(id)a0;
- (void)enterProfileWithUserModel:(id)a0;
- (void)updateTotalUnreadCount;
- (Class)emptyCellClass;
- (id)originDataSource;
- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (unsigned long long)cellType;
- (void)dealloc;
- (Class)cellClass;
- (id)requestError;

@end
