@class AWESearchSugCacheConfig, NSString, AWESearchSugRecommendWordsModel, NSDictionary, AWESearchSchemaModel, NSMutableArray, UIViewController, AWESearchSugCacheStorage, AWERecommendWordQueryRecordModel;
@protocol AWEHttpTask;

@interface AWESearchSugManager : NSObject {
    NSString *_searchLocalSessionID;
}

@property (weak, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long sugHistorySumLimit;
@property (retain, nonatomic) NSMutableArray *sugHistoryArray;
@property (readonly, nonatomic) AWESearchSugCacheStorage *sugCache;
@property (readonly, nonatomic) AWESearchSugCacheConfig *sugCacheConfig;
@property (copy, nonatomic) NSDictionary *lifeServicePageConfig;
@property (nonatomic) double lastCacheTimeStamp;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) AWESearchSugRecommendWordsModel *guessWordsModel;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *query;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (weak, nonatomic) UIViewController *referenceViewController;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) BOOL isFromECLiveChannel;
@property (nonatomic) BOOL isFromLifeMall;
@property (nonatomic) BOOL isFromLifePOI;
@property (nonatomic) BOOL isFromLifeService;
@property (nonatomic) BOOL isFromExplore;
@property (nonatomic) BOOL isRecommendStyle;
@property (nonatomic) BOOL isVirtualSug;
@property (nonatomic) BOOL isSugFromResult;
@property (nonatomic) BOOL alreadySearched;
@property (nonatomic) BOOL alreadySearchedOnce;
@property (nonatomic) unsigned long long searchStyleType;
@property (retain, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *searchLocalSessionID;
@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterType;
@property (copy, nonatomic) NSString *selectedContent;
@property (nonatomic) double gapTime;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSDictionary *sugExtra;
@property (copy, nonatomic) NSString *pitayaUploadInfoString;
@property (nonatomic) BOOL hasInsertMobileSug;
@property (copy, nonatomic) NSString *lastCacheQuery;
@property (nonatomic) BOOL isCacheShowing;
@property (nonatomic) double fisrtSugInputTime;
@property (nonatomic) BOOL lastSugQueryAIButtonState;

+ (BOOL)enableSearchTabConfigOpt;
+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (id)currentUserId;
- (void)p_handleRefreshServerTimeCost:(id)a0;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)getFinalGetUrl:(id)a0 withParams:(id)a1;
- (id)getSugParamWithTextFieldParams:(id)a0;
- (void)saveSugWord:(id)a0;
- (id)getLastSearchQueryParams;
- (void)fetchSearchSugWithQuery:(id)a0 type:(unsigned long long)a1 textFieldParams:(id)a2 completion:(id /* block */)a3;
- (void)cleanSugHistory;
- (id)lifeServicePageDynamicConfig;
- (id)getLifeServiceSugExtraString;
- (id)lifeServicePageSugDynamicConfig;
- (id)stringValueFromType:(unsigned long long)a0;
- (void)insertSearchByMobileSugIfNeed:(id)a0;
- (void)p_handleTriggerSugEnterFrom;
- (void)hasBeenSearched;
- (void).cxx_destruct;
- (id)init;
- (BOOL)enableCache;

@end
