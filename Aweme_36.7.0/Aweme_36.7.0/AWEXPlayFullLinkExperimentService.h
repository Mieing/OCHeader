@class NSLock, NSMutableDictionary;

@interface AWEXPlayFullLinkExperimentService : NSObject

@property (retain, nonatomic) NSMutableDictionary *attemptExposureExperiments;
@property (retain, nonatomic) NSLock *lock;

- (void)exposureExperimentWithCore:(id)a0 supplierSDKType:(id)a1 roomId:(id)a2;
- (id)experimentValuesWithKeys:(id)a0 type:(unsigned long long)a1 env:(id)a2;
- (id)experimentConfigWithKey:(id)a0;
- (id)formatRTCPodExperiments:(id)a0;
- (id)formatMiddlewareExperiments:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
