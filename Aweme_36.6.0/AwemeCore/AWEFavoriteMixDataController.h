@class AWEUserModel, NSString, NSDictionary, AWEMixVideoModel, NSNumber, NSMutableArray;

@interface AWEFavoriteMixDataController : AWEListDataController <AWEFavoriteMixDataControllerProtocol>

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) AWEMixVideoModel *justRemovedModel;
@property (retain, nonatomic) NSMutableArray *invalidDataSource;
@property (retain, nonatomic) NSMutableArray *validDataSource;
@property (retain, nonatomic) NSMutableArray *invalidTempDataSource;
@property (retain, nonatomic) NSMutableArray *emptyMixDataSource;
@property (retain, nonatomic) NSMutableArray *primaryDataSource;
@property (retain, nonatomic) NSDictionary *logPb;
@property (copy, nonatomic) NSString *pushMixIDs;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) long long sortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (BOOL)removeWithItemID:(id)a0;
- (BOOL)addAwemeWithItemID:(id)a0;
- (void)trackFavoriteMixRequestWithModel:(id)a0 type:(id)a1 err:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)requestUrl;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
