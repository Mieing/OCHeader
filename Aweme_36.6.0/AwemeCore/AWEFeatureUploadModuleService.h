@class NSMutableDictionary, NSDictionary, NSCalendar, NSString;

@interface AWEFeatureUploadModuleService : HTSService <AWEFeatureUploadModuleService, HTSAppLifeCycle>

@property (retain, nonatomic) NSMutableDictionary *sessionIndexFeatureDict;
@property (copy, nonatomic) NSDictionary *sessionIndexFeatureConfigDict;
@property (retain, nonatomic) NSMutableDictionary *feedIndexFeatureDict;
@property (copy, nonatomic) NSDictionary *feedIndexFeatureConfigDict;
@property (retain, nonatomic) NSCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (long long)feedRecommendReqIndexInLife;
- (void)increaseFeedRecommendReqIndexInLife;
- (id)sessionIndexFeatures;
- (id)feedIndexFeatures;
- (void)updateFeedIndexIfNeeded:(long long)a0;
- (id)parseSessionIndexFeatureConfig;
- (id)parseFeedIndexFeatureConfig;
- (void)updateSessionIndexFeature:(BOOL)a0;
- (void)readFeedRecommendReqIndexInLifeFromDisk;
- (BOOL)isCurrentSessionDailyFirstByPreviousSessionTime:(double)a0;
- (BOOL)isInTodayWithDate:(id)a0;
- (void)resetFeedIndexFeatureWhenHomeResume;
- (BOOL)AWEFeedRecommendReqIndexInLifeReportEnable;
- (void)recordFeedRecommendReqIndexInLifeToDisk;
- (void).cxx_destruct;
- (void)dealloc;

@end
