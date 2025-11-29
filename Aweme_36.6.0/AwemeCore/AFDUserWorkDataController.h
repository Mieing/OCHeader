@class NSString, NSSet, NSNumber, AWEUserStatusSynchronizer;

@interface AFDUserWorkDataController : AWEListDataController

@property (retain, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSSet *initialAwemeIDs;
@property (retain, nonatomic) AWEUserStatusSynchronizer *userStatusSynchronizer;
@property (nonatomic) BOOL disableLoadMore;
@property (nonatomic) unsigned long long pageScene;

+ (id)URLString;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithUserID:(id)a0 initialAwemeList:(id)a1;
- (id)initWithUserID:(id)a0 initialAwemeList:(id)a1 disableLoadMore:(BOOL)a2;
- (void)p_syncAweme:(id)a0;
- (id)networkParams:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
