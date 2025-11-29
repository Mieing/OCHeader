@class NSString, NSArray, NSDictionary, NSNumber, NSMutableArray;

@interface AWESearchHybridRequestParamsContext : AWESearchVerticalRequestParamsBaseContext

@property (nonatomic) BOOL is_last_feed_clicked;
@property (nonatomic) BOOL is_outer_first_req;
@property (copy, nonatomic) NSString *containerPageName;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *cacheType;
@property (nonatomic) long long doubleColumnFeedType;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (copy, nonatomic) NSNumber *minCursor;
@property (nonatomic) BOOL isOuterFirstReq;
@property (nonatomic) BOOL isTidy;
@property (nonatomic) long long pullType;
@property (nonatomic) BOOL isPreload;
@property (copy, nonatomic) NSString *latestClickedIdsString;
@property (retain, nonatomic) NSArray *fromModelsArray;
@property (copy, nonatomic) NSString *enterFromAwemeID;
@property (retain, nonatomic) NSMutableArray *clickModelsArray;
@property (nonatomic) BOOL isLastFeedClicked;
@property (nonatomic) long long reqOffset;
@property (nonatomic) BOOL isPreloadRecommendDataAfterSearch;
@property (nonatomic) BOOL willDoFirstPullRefreshAfterQuitSearch;
@property (nonatomic) BOOL enableImageChunk;
@property (copy, nonatomic) NSDictionary *guide_info;
@property (copy, nonatomic) NSString *guide_reference;
@property (nonatomic) BOOL isClickRefreshBar;
@property (nonatomic) long long todayColdLaunchRank;
@property (retain, nonatomic) NSArray *noDidItemIds;
@property (nonatomic) long long feedRequestType;
@property (copy, nonatomic) NSDictionary *prefetchExtraParamForNewUser;
@property (copy, nonatomic) NSString *serverClientExtra;
@property (nonatomic) BOOL userActivelyExitedSearch;
@property (copy, nonatomic) NSString *searchSessionID;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void).cxx_destruct;

@end
