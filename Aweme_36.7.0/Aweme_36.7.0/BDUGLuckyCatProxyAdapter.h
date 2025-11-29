@class NSString;

@interface BDUGLuckyCatProxyAdapter : NSObject <BDUGLuckyDogProxyProtocol>

@property (nonatomic) double lastRequestTime;
@property (copy, nonatomic) NSString *schemaForALog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (BOOL)canHandleProxy:(id)a0;
- (id)decideRealUrl:(id)a0;
- (id)decideRealUrl:(id)a0 settingsWillUpdate:(BOOL *)a1;
- (id)decideRealUrl:(id)a0 settingsWillUpdate:(BOOL *)a1 failReason:(id *)a2;
- (BOOL)triggerSettingsUpdateByProxyFailure;
- (id)statusTableFECacheKeyWithActivityID:(id)a0 cycleID:(long long)a1;
- (id)__routerTrackParams;
- (id)decideRedirectUrl:(id)a0 failReason:(id *)a1 settingsWillUpdate:(BOOL *)a2;
- (id)decideFallbackUrl:(id)a0;
- (void)trackerHandleScheme:(id)a0 target:(id)a1 fallback:(id)a2 sceneKey:(id)a3 handle:(BOOL)a4 reason:(id)a5;
- (BOOL)callSettings;
- (id)decideRedirectUrl:(id)a0 index:(long long)a1 failReason:(id *)a2 settingsWillUpdate:(BOOL *)a3;
- (id)addQueryFrom:(id)a0 to:(id)a1;
- (id)redirectSchemaWithConfig:(id)a0 activityID:(id)a1;
- (id)statusTableSchema:(id)a0 activityID:(id)a1;
- (id)timeTableSchema:(id)a0;
- (id)abTestTableSchema:(id)a0;
- (void).cxx_destruct;

@end
