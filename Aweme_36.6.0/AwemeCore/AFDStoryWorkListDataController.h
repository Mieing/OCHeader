@class NSMutableArray, NSString, AWEUserModel, AWESocialRelationObserver, NSDate, NSNumber, AWECodeGenMateRelationModel;
@protocol AWEHttpTask;

@interface AFDStoryWorkListDataController : AWEListDataController <AWEUserMessage>

@property (retain, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (retain, nonatomic) NSString *userID;
@property (nonatomic) long long pageSize;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) NSNumber *maxTimestamp;
@property (retain, nonatomic) NSNumber *minTimestamp;
@property (retain, nonatomic) NSDate *lastFreshTime;
@property (nonatomic) BOOL onlyCover;
@property (nonatomic) BOOL alwaysEmpty;
@property (nonatomic) BOOL relationChanged;
@property (retain, nonatomic) AWECodeGenMateRelationModel *mateRelation;
@property (retain, nonatomic) NSMutableArray *addedAweme;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWESocialRelationObserver *mateStatusObserver;
@property (retain, nonatomic) NSMutableArray *sectionInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishSetRemarkWithUser:(id)a0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)isStrangerStory;
- (void)loadMore:(id /* block */)a0;
- (BOOL)needReloadData;
- (BOOL)needRefreshData;
- (void)p_updateMateRelation:(id)a0;
- (void)deleteAwemeWithID:(id)a0;
- (void)insertAweme:(id)a0;
- (BOOL)isCoverOnly;
- (void)weakRefresh;
- (void)p_handleMateDislike:(id)a0;
- (void)newStoryRefresh:(id /* block */)a0;
- (void)p_updateExistedData:(id)a0;
- (void)addNewListData:(id)a0;
- (void)fetchMateStory:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)refresh:(id /* block */)a0;
- (BOOL)cancelCurrentRequest;

@end
