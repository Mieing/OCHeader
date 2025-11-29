@class NSString, AWESearchGlobalDoodleConfigModel, AWESearchFrequencyManager, NSDictionary, AWESearchHarmfulCategoryManager, AWERiskPreventModel, UIViewController, NSMutableDictionary, NSNumber;
@protocol AWEHttpTask;

@interface AWESearchLiveListDataViewController : AWEListDataController <AWESearchLiveStreamProtocol>

@property (copy, nonatomic) NSNumber *offset;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSString *dateString;
@property (copy, nonatomic) NSString *unifiedSearchId;
@property (copy, nonatomic) NSString *keyWord;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL fromHotSearch;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (nonatomic) BOOL isSwitchTab;
@property (copy, nonatomic) NSString *previousSearchID;
@property (copy, nonatomic) NSString *previousTab;
@property (copy, nonatomic) NSDictionary *searchExtraParams;
@property (weak, nonatomic) UIViewController *refViewController;
@property (nonatomic) BOOL hitLimit;
@property (nonatomic) BOOL shouldLoginLimit;
@property (retain, nonatomic) AWESearchFrequencyManager *frequencyManager;
@property (retain, nonatomic) AWESearchHarmfulCategoryManager *harmfulCategoryManager;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *searchRequestLogQueries;
@property (copy, nonatomic) NSString *liveIDList;
@property (nonatomic) long long searchResultCount;
@property (copy, nonatomic) NSString *fromRoomId;
@property (copy, nonatomic) NSString *innerLiveType;
@property (copy, nonatomic) NSString *liveCardType;
@property (nonatomic) BOOL isInnerLive;
@property (copy, nonatomic) NSString *searchResultId;
@property (nonatomic) long long docType;
@property (copy, nonatomic) NSString *alaSrc;
@property (retain, nonatomic) NSMutableDictionary *filteredToRaw;
@property (retain, nonatomic) NSMutableDictionary *rawToFiltered;
@property (copy, nonatomic) id /* block */ beforeBuildRequestBlock;
@property (copy, nonatomic) NSString *streamSearchId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)calculateFilteredDataSource;
- (long long)dataSourceIndexFromFilteredIndex:(long long)a0;
- (long long)filteredDataSourceIndexFromIndex:(long long)a0;
- (id)currentTimeStr;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (id)buildSendBackDocsForRequest;
- (BOOL)isFewResults;
- (void)reloadRecommondLiveWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)reloadFeedLiveWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
