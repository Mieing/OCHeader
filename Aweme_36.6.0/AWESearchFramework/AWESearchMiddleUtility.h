@class NSDictionary, NSArray;

@interface AWESearchMiddleUtility : NSObject

@property (nonatomic) BOOL shouldSkipRecord;
@property (copy, nonatomic) NSDictionary *feedTotalDurationDic;
@property (copy, nonatomic) NSArray *itemIDArray;

+ (id)searchMiddlePageTypeStringWith:(long long)a0;
+ (BOOL)p_matchingExpParams:(id)a0 withSettingsParams:(id)a1;
+ (BOOL)forceUseNativeMode;
+ (BOOL)shouldUseDeepThinkTopBarWithType:(long long)a0;
+ (id)obtainDeepThinkTopBarControllerWithType:(long long)a0 context:(id)a1;
+ (BOOL)shouldUseNewTopBarWithType:(long long)a0;
+ (id)obtainTopBarControllerWithType:(long long)a0 context:(id)a1;
+ (BOOL)shouldSetupNewMiddlePageWithType:(long long)a0;
+ (id)obtainMiddlePageViewControllerWithType:(long long)a0 routerModel:(id)a1;
+ (id)shareInstance;

- (void)recordFeedTotalDurationWith:(id)a0 totalTime:(double)a1;
- (void)clearFeedTotaldurationRecoder;
- (double)getFeedTotalDurationWith:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
