@class NSString, NSDictionary, AWESearchSchemaModel, NSNumber;

@interface AWESearchRequestParamsBaseContext : NSObject

@property (retain, nonatomic) AWESearchSchemaModel *routerModel;
@property (nonatomic) BOOL isPredictFetch;
@property (nonatomic) BOOL isManualPreRequest;
@property (nonatomic) BOOL isAfterLocate;
@property (nonatomic) BOOL isFirstRequest;
@property (nonatomic) BOOL isPullRefresh;
@property (nonatomic) BOOL isFirstTimeSearch;
@property (nonatomic) BOOL isRepeatPreRequest;
@property (retain, nonatomic) NSString *initialSearchSource;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) long long count;
@property (nonatomic) long long loadMoreCount;
@property (retain, nonatomic) NSString *pagingFeatureInfo;
@property (retain, nonatomic) NSDictionary *extraLogParams;
@property (nonatomic) BOOL isFilterSearch;
@property (retain, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *initialOriginSearchSource;
@property (copy, nonatomic) NSString *initialSearcKeyword;
@property (copy, nonatomic) NSString *initialGeneralSearchId;
@property (copy, nonatomic) NSString *preGeneralSearchId;
@property (copy, nonatomic) NSString *clientServerParams;
@property (nonatomic) BOOL isLoadMore;
@property (nonatomic) BOOL isPreRequest;
@property (nonatomic) BOOL isPassiveRequest;
@property (nonatomic) BOOL isPressPreRequest;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSString *clientPrefetchType;
@property (retain, nonatomic) NSString *preFetchId;
@property (nonatomic) BOOL onlyShowSug;
@property (nonatomic) BOOL isSugShowing;
@property (nonatomic) BOOL searchBarHasCapsule;
@property (nonatomic) long long capsuleIndex;
@property (nonatomic) BOOL shouldTrackCapsuleNewClick;
@property (copy, nonatomic) NSDictionary *nextPageForParamProvider;
@property (nonatomic) BOOL switchParamsProvider;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *searchVCName;
@property (nonatomic) BOOL isCommonPreRequest;
@property (nonatomic) BOOL isCommonFrontRequest;

- (void)updateWithRouterModel:(id)a0;
- (void)updateWithExtraLogParams:(id)a0;
- (id)initWithRouterModel:(id)a0 extraLogParams:(id)a1;
- (void).cxx_destruct;

@end
