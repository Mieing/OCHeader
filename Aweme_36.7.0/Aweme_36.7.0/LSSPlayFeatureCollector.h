@class NSArray, NSMutableDictionary, NSString, NSMutableArray;

@interface LSSPlayFeatureCollector : LSSBaseFeatureCollector {
    NSString *_lastestSessionId;
}

@property (retain, nonatomic) NSMutableArray *timerSerialFeaturesList;
@property (retain, nonatomic) NSMutableDictionary *sessionInfoMap;
@property (retain, nonatomic) NSMutableArray *sessionIdArray;
@property (retain, nonatomic) NSArray *RTFeaturesList;
@property (retain, nonatomic) NSMutableDictionary *downloadSpeedInfo;

+ (id)defaultFeatureCollector;

- (id)fillInputFeature:(id)a0 projectKey:(id)a1 strategyConfigBundleName:(id)a2 extraInfo:(id)a3;
- (void)updateFeatureConfig:(id)a0;
- (id)initCollector;
- (id)fillInputRTFeature:(id)a0 projectKey:(id)a1 strategyConfigBundleName:(id)a2 extraInfo:(id)a3;
- (void)setEventCallBackInfo:(long long)a0 eventInfo:(id)a1;
- (void)setTimerSerialInfo;
- (void)initTimerSerialFeaturesList;
- (id)changeFirstChar:(id)a0;
- (id)fireNotifyToPlayer:(id)a0 defaultValue:(id)a1 sessionId:(id)a2;
- (void).cxx_destruct;

@end
