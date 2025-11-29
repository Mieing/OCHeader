@class NSDictionary, AWESearchHomeNewStyleSearchBarController;

@interface AWESearchAIQueryTemplateAnchorManager : NSObject

@property (nonatomic) BOOL isHomepageDidAppear;
@property (nonatomic) BOOL isPullRefreshFinished;
@property (retain, nonatomic) id feedLandingInfoManager;
@property (nonatomic) BOOL isKVOObserverAdded;
@property (copy, nonatomic) NSDictionary *AIQueryAnchorInfo;
@property (copy, nonatomic) NSDictionary *userGuideReference;
@property (weak, nonatomic) AWESearchHomeNewStyleSearchBarController *searchBarController;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;
+ (id)sharedManager;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (void)clearAIQueryAnchorInfo;
- (void)p_pullKeyboardIfNeeded;
- (BOOL)enableAnchorAutoQueryFillup;
- (id)p_tryToGetInputFromUserGuide;
- (void)homepage_endPullRefreshWithReason:(long long)a0 willGuideCardShow:(BOOL)a1;
- (void)homepage_viewDidAppear;
- (BOOL)isAnchorContentAvailable;
- (id)getAnchorQueryDataWithKey:(id)a0;
- (void)onZlinkWillParse;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
