@class NSString, NSDictionary, NSNumber, NSMutableArray;

@interface AWEChallengeAwemeListDataController : AWEListDataController <AWEChallengeListDataControllerProtocol> {
    NSMutableArray *_filteredDataSource;
}

@property (copy, nonatomic) NSNumber *offset;
@property (nonatomic) long long hotSpotCount;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *hashtagName;
@property (copy, nonatomic) NSString *awemeIDToInsert;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long sortType;
@property (retain, nonatomic) NSMutableArray *adFilteredDataSource;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) BOOL isHalfScreen;
@property (copy, nonatomic) NSString *fromGroupID;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (nonatomic) long long modelType;
@property (nonatomic) unsigned long long videoShowType;
@property (nonatomic) unsigned long long lastVisitTime;
@property (nonatomic) unsigned long long initFetchCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)mapRealAwemeList:(id)a0;
- (long long)convertIndexToAdFiltered:(long long)a0;
- (id)getAwemeModelFromLiveInfo:(id)a0;
- (long long)convertIndexToOrigin:(long long)a0;
- (void)preloadWithDataSource:(id)a0;
- (void)appendModel:(id)a0;
- (long long)convertIndexToFilterIndex:(long long)a0;
- (void)reCalculateAdFilteredDataSourceAfterInsert;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)filteredDataSource;
- (void)setFilteredDataSource:(id)a0;

@end
