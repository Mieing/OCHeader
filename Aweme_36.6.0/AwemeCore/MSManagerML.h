@interface MSManagerML : NSObject {
    void *_cgqueue;
    void *_cpqueue;
}

+ (void)setABSwitch:(long long)a0;
+ (id)safeVersionInfo;
+ (id)get:(id)a0;

- (id /* block */)setIDFA;
- (id /* block */)queryMsRiskInfo;
- (void)doSwitchManagerPerformanceTest;
- (id)getFeatureHash:(id)a0 Body:(id)a1;
- (id)getReportRaw:(id)a0 customInfo:(id)a1 mode:(int)a2;
- (void)postEventMessage:(struct _ms_business_helper_struct { long long x0; long long x1; id x2; })a0;
- (void)report:(id)a0 toHost:(id)a1;
- (id /* block */)setBDDeviceID;
- (id /* block */)setCustomInfo;
- (id /* block */)setMsSettingConfig;
- (id)whoisGame:(id)a0 withType:(long long)a1;
- (id)initWithAppID:(id)a0;
- (int)registerScenePageNameCallback:(int)a0 cb:(id)a1;
- (void)reportForScene:(id)a0;
- (id /* block */)setDeviceID;
- (id /* block */)setInstallID;
- (id /* block */)setSessionID;
- (id /* block */)setChannel;
- (id /* block */)setMode;
- (void)logWithGame;
- (id /* block */)setCustomInfoWithOverrideOption;
- (id)isGameType;
- (id)versionInfo;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
