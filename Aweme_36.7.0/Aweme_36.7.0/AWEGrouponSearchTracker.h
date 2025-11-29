@interface AWEGrouponSearchTracker : NSObject

@property (nonatomic) double didLoadTime;
@property (nonatomic) double firstClickTime;
@property (nonatomic) double realSugWordFirstShowTime;
@property (nonatomic) BOOL isFeedFmpEnd;
@property (nonatomic) BOOL isFeedFmpEasyEnd;
@property (nonatomic) BOOL isFeedFmpActualEnd;
@property (nonatomic) BOOL isFeedCache;
@property (nonatomic) BOOL isTransformerFmpEnd;
@property (nonatomic) BOOL isTransformerFmpEasyEnd;
@property (nonatomic) BOOL isSettingCache;
@property (nonatomic) BOOL isFirstClick;
@property (nonatomic) BOOL isRealSugWordDidShow;
@property (nonatomic) BOOL interrupted;

- (void)realSugWordDidShow;
- (void)feedListEndReload;
- (void)feedActualDataListEndReload;
- (void)updateFeedCache:(BOOL)a0;
- (void)transformerDidShowEasyParams:(id)a0 renderTime:(double)a1 error:(id)a2 loadStrategy:(long long)a3;
- (void)updateSettingCache:(BOOL)a0;
- (void)clickSearch:(long long)a0 isRealSugWord:(BOOL)a1 clickView:(id)a2;
- (long long)getCacheMode;
- (void)feedListCoverDidShowEnd;
- (id)init;
- (void)didLoad;

@end
