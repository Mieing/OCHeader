@class NSString, NSDictionary, AWETeenSearchKeywordModel, NSMutableArray;
@protocol AWEFeedPreloadManagerProtocol;

@interface AWETeenSearchGeneralDataController : AWEListDataController

@property (nonatomic) unsigned long long cursor;
@property (retain, nonatomic) NSMutableArray *externalDataSource;
@property (retain, nonatomic) NSMutableArray *internalDataSource;
@property (retain, nonatomic) NSMutableArray *internalItemIDs;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL isFirst;
@property (retain, nonatomic) id<AWEFeedPreloadManagerProtocol> preloadManager;
@property (retain, nonatomic) AWETeenSearchKeywordModel *keyWord;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long awemeType;
@property (nonatomic) long long searchType;
@property (nonatomic) long long searchVideoType;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)p_requestParams;
- (void)p_reportAwemeVideoNotTeen:(id)a0;
- (void)p_fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (id)p_awemeModelWithGeneralModel:(id)a0;
- (void)p_trackSearchWithResponse:(id)a0 error:(id)a1 reqeustDuration:(double)a2;
- (id)p_filterCardListWithResponse:(id)a0;
- (void)p_addTrackParamsWithModelList:(id)a0;
- (void)enterInternalFeedWithExternalIndex:(long long)a0;
- (long long)internalIndexWithitemID:(id)a0;
- (void)quitInternalFeed;
- (void).cxx_destruct;
- (id)dataSource;
- (void)clear;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
