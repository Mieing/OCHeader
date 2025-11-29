@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface AWELiveAcqCastVideoChallengeDataManager : AWEListDataController {
    NSMutableArray *_filteredDataSource;
}

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long sortType;
@property (retain, nonatomic) NSMutableArray *adFilteredDataSource;
@property (nonatomic) BOOL isCommerce;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL richAwemeEnabled;
@property (nonatomic) long long modelType;

+ (void)requestAwemeListWithID:(id)a0 isCommerce:(BOOL)a1 pullType:(id)a2 cursor:(id)a3 count:(id)a4 enterFrom:(id)a5 type:(unsigned long long)a6 sourceType:(unsigned long long)a7 extraParams:(id)a8 roomID:(id)a9 completion:(id /* block */)a10;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (BOOL)canLoadMore;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)mapRealAwemeList:(id)a0;
- (long long)convertIndexToAdFiltered:(long long)a0;
- (id)getAwemeModelFromLiveInfo:(id)a0;
- (void)p_filterRichAwemeIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)filteredDataSource;
- (void)setFilteredDataSource:(id)a0;

@end
