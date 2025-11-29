@class NSString, NSMutableDictionary, NSMutableSet, NSNumber, NSMutableArray;

@interface AWEFamiliarRecommendWorkDataController : AWEListDataController

@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long pageSize;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSMutableSet *addItems;
@property (retain, nonatomic) NSMutableSet *blockUsers;
@property (retain, nonatomic) NSMutableDictionary *unRecommendItems;
@property (retain, nonatomic) NSMutableArray *deleteItems;
@property (nonatomic) BOOL isHaveRecommendVideoPrivacyStatus;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMore:(id /* block */)a0;
- (id)initWithSecUserID:(id)a0;
- (void)dataSourceRemoveItemsWithRemoveItems:(id)a0;
- (void)changeDiggedStatus:(BOOL)a0 withItemID:(id)a1;
- (void)changeFavoritedStatus:(BOOL)a0 withItemID:(id)a1;
- (void)changeFamiliarRecommendStatusWithNotification:(id)a0;
- (void)deleteFamiliarRecommendVideoWithNotification:(id)a0;
- (void)changeFamiliarRecommendVideoPrivacyStatus;
- (void)handleDidFinishBlockUser:(id)a0;
- (void)handleDidFinishUnBlockUser:(id)a0;
- (BOOL)refreshDataIfNeeded;
- (BOOL)containAwemeWithItemID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)reloadDataIfNeeded;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;

@end
