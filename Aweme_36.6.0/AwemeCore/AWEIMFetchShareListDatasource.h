@class AWEIMFetchShareListConfigs, NSOrderedSet, NSSet, NSMutableDictionary, NSMutableOrderedSet, NSDictionary, NSMutableArray;

@interface AWEIMFetchShareListDatasource : NSObject

@property (copy, nonatomic) NSOrderedSet *disrecommendIDs;
@property (copy, nonatomic) NSSet *inFoldBoxGroupChatIDs;
@property (retain, nonatomic) NSMutableDictionary *rawCacheDict;
@property (retain, nonatomic) NSMutableDictionary *rawCountDict;
@property (retain, nonatomic) NSMutableOrderedSet *invalidExposureShareModel;
@property (copy, nonatomic) NSDictionary *invalidExposureInfoDict;
@property (retain, nonatomic) NSMutableArray *commonFilters;
@property (nonatomic) BOOL fetchContactError;
@property (retain, nonatomic) NSMutableOrderedSet *result;
@property (retain, nonatomic) AWEIMFetchShareListConfigs *configs;

+ (void)insertShareModel:(id)a0 toFrontIndex:(long long)a1 inShareModelList:(id)a2;
+ (BOOL)insertShareModelSuccess:(id)a0 toFrontIndex:(long long)a1 inShareModelList:(id)a2;

- (BOOL)checkShareValid:(id)a0;
- (id)getRawDataForType:(unsigned long long)a0;
- (id)disrecommendConversationIds;
- (id)removedSecUserIDs;
- (id)removedConversationIds;
- (void)prepareInFoldBoxIDs;
- (void)p_fetchRecentWithCount:(unsigned long long)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchLatestWithCount:(unsigned long long)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchWholeContactWithCount:(unsigned long long)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchRecommendWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchRecentSharedWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchConsecutiveWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchInvalidExposureShareModelsWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchMessageTabSortWithCount:(unsigned long long)a0 dataSource:(id)a1 completion:(id /* block */)a2;
- (void)p_fetchRecentSendWithDataSource:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchRawDataForType:(unsigned long long)a0 maxCount:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)p_transToSortedInfoModelList:(id)a0;
- (void)prepareRawDataWithContainers:(id)a0 maxCount:(unsigned long long)a1;
- (id)invalidExposureInfoModelForShareModel:(id)a0;
- (void)addInvalidExposureShareModel:(id)a0;
- (void)fetchRawDataForType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)addCommonFilter:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
