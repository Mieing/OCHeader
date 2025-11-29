@class NSMutableDictionary, NSDictionary, NSString, AWEMVChannelPageContext;

@interface AWEMVChannelFeatureUploadService : HTSService <AWEMVChannelFeatureUploadService, HTSAppLifeCycle>

@property (retain, nonatomic) NSMutableDictionary *sessionIndexFeatureDict;
@property (copy, nonatomic) NSDictionary *sessionIndexFeatureConfigDict;
@property (retain, nonatomic) NSMutableDictionary *feedIndexFeatureDict;
@property (copy, nonatomic) NSDictionary *feedIndexFeatureConfigDict;
@property (retain, nonatomic) NSString *backForegroundItemIds;
@property (weak, nonatomic) AWEMVChannelPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (BOOL)isCurrentSessionDailyFirstByPreviousSessionTime:(double)a0;
+ (BOOL)isInTodayWithDate:(id)a0;
+ (id)reviseFeatureParamsForColdLaunch:(id)a0;

- (void)onServiceInit;
- (void)onAppWillEnterForeground;
- (id)sessionIndexFeatures;
- (id)feedIndexFeatures;
- (void)updateFeedIndexIfNeeded:(unsigned long long)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)singleFeatures;
- (id)parseSessionIndexFeatureConfig;
- (id)parseFeedIndexFeatureConfig;
- (void)updateSessionIndexFeature:(BOOL)a0;
- (void)resetFeedIndexFeatureWhenHomeResume;
- (BOOL)enableUploadFeatures;
- (id)featureSequenceWithRequestNums:(long long)a0;
- (long long)feedIndexInLife;
- (id)backForegroundItemIdsFeature;
- (void)readFeedIndexInLifeFromDisk;
- (void)recordFeedIndexInLifeToDisk;
- (void)clearBackForegroundItemIdsFeature;
- (id)mediumVideoFeaturesWithRequestNums:(long long)a0;
- (void)updateBackForegroundItemIds;
- (void)increaseFeedIndexInLife;
- (id)prepareFeatureParamsForNextColdLaunch;
- (void).cxx_destruct;
- (void)dealloc;

@end
