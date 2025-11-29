@class NSString, NSMutableDictionary, NSDate;

@interface AWEFriendsTabUserMetricsCalculator : NSObject <AWEFriendsTabUserMetricsCalculatorProtocol>

@property (retain, nonatomic) NSDate *enterFriendsTabDate;
@property (retain, nonatomic) NSMutableDictionary *userMetricsCache;
@property (nonatomic) double createDBTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getUserPortraitWithType:(id)a0;
- (void)recordActivityEvent:(long long)a0;
- (double)statisticalDaysWithConfig:(id)a0;
- (id)dbLogic;
- (id)configOfHistoricalCacheHitRate;
- (float)calculateCacheHitRate:(id)a0 typeUsed:(long long)a1 typeStored:(long long)a2;
- (id)getSensitivityLevelWithType:(id)a0 config:(id)a1 sensitivity:(float)a2;
- (id)configOfPreloadCacheHitRate;
- (id)configOfUnreadCacheHitRate;
- (id)getHistoricalCacheHitRateLevel;
- (id)getPreloadCacheHitRateLevel;
- (id)getUnreadCacheHitRateLevel;
- (id)configOfConsumptionDepth;
- (float)calculateConsumptionDepth:(id)a0;
- (id)configOfPublishLandingConsumptionDepth;
- (float)calculatePublishLandingConsumptionDepth:(id)a0;
- (id)configOfSlideConsumptionDepth;
- (float)calculateSlideConsumptionDepth:(id)a0;
- (id)configOfRedDotConsumptionDepth;
- (float)calculateRedDotConsumptionDepth:(id)a0;
- (id)getConsumptionDepthLevel;
- (id)getPublishLandingConsumptionDepthLevel;
- (id)getSlideConsumptionDepthLevel;
- (id)getRedDotConsumptionDepthLevel;
- (id)configOfFriendsTabEnterFrequency;
- (float)calculateFriendsTabEnterFrequency:(id)a0;
- (id)configOfPushSensitivity;
- (id)configOfRedDotSensitivity;
- (id)getFriendsTabEnterFrequencyLevel;
- (id)getPushActivityLevel;
- (id)getRedDotSensityLevel;
- (id)getRedDotActivityLevel;
- (void)initializeMetricsSystem;
- (void)recordUserActivityEvent:(long long)a0;
- (void)recordEnter;
- (void)recordInvalidConsumptionWhenExit;
- (void)clearUserMetricsCache:(long long)a0;
- (double)thresholdValueWithType:(id)a0 isMaximum:(BOOL)a1 config:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
