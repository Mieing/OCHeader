@class NSString;

@interface AWERelatedVideoSearchDataController : AWEListDataController <AWEAwemeDetailTableViewControllerDelegate, AWERelatedVideoSearchDataControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long offset;
@property (nonatomic) long long loadCount;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *queryID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) double playtime;
@property (copy, nonatomic) NSString *videoUid;
@property (nonatomic) long long backupOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)appearIndexSet;
- (void)setAppearIndexSet:(id)a0;
- (void)requestUsingLiveApiWithIsRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateFilteredDataSourceWithRooms:(id)a0;
- (id)room2AWEAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
