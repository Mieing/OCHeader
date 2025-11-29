@class NSDictionary, NSNumber, NSString;

@interface AWEMVUGClientFeatureService : HTSService <AWEMVUGClientFeatureService>

@property (retain, nonatomic) NSDictionary *features;
@property (nonatomic) unsigned long long outerFlowCounter;
@property (nonatomic) unsigned long long innerFlowCounter;
@property (retain, nonatomic) NSNumber *activeTimestamp;
@property (copy, nonatomic) NSString *currentActiveUrl;
@property (copy, nonatomic) NSString *currentActiveFeature;
@property (nonatomic) BOOL needAspectEventForMVPush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)onAppDidBecomeActive;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)onAppLaunchWithUrl:(id)a0;
- (void)onAppHandleOpenUrl:(id)a0;
- (void)onAppHandleUserActivity:(id)a0;
- (void)onAppHandleNotification:(id)a0;
- (BOOL)startIfNeededWithUrl:(id)a0 tag:(id)a1;
- (id)currentFeatures;
- (id)featuresForFeedType:(unsigned long long)a0;
- (void)requestCounterPlusOneForType:(unsigned long long)a0;
- (id)createInnerDataControllerForUGFeature:(id)a0 context:(id)a1;
- (BOOL)isNeedAspectEventForMVPush:(id)a0 referString:(id)a1 eventName:(id)a2;
- (void)setAspectEventForMVPushStatus:(BOOL)a0;
- (BOOL)disableInsertVideosForPush:(id)a0;
- (BOOL)p_isValidFeature:(id)a0;
- (BOOL)isEnable;
- (void)reset:(id)a0;
- (void).cxx_destruct;
- (long long)timestamp;
- (BOOL)isActive;

@end
