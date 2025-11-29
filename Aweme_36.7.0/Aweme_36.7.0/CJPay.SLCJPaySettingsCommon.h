@interface CJPay.SLCJPaySettingsCommon : NSObject {
    void /* unknown type, empty encoding */ __rts_settingsQueue;
    void /* unknown type, empty encoding */ settingsDic;
    void /* unknown type, empty encoding */ __rts_retryCount;
    void /* unknown type, empty encoding */ __rts_failSign;
    void /* unknown type, empty encoding */ __rts_isEnablePush;
    void /* unknown type, empty encoding */ __rts_deploys;
    void /* unknown type, empty encoding */ __rts_stableSettings;
    void /* unknown type, empty encoding */ lastConnectedTime;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ __rts_preCheckTaskIsCompleted;
    void /* unknown type, empty encoding */ __rts_storage;
    void /* unknown type, empty encoding */ delegate;
}

+ (id)getInstance;

- (void)setIsEnablePush:(BOOL)a0;
- (id)getSettingsQueue;
- (void)settingsInit;
- (BOOL)shouldPullConfig;
- (BOOL)existLocalSettings;
- (BOOL)checkLaunchIntervalExceed7Days;
- (BOOL)isMoreThanSevenDaysBetween:(id)a0 :(id)a1;
- (void)setFailSign:(BOOL)a0;
- (BOOL)getFailSign;
- (void)setPreCheckTaskIsCompleted:(BOOL)a0;
- (void)pullConfigWithAction:(int)a0 :(id)a1 :(id /* block */)a2;
- (void)handleResponse:(id)a0 :(id)a1;
- (void)reportSettingsWithAction:(id)a0;
- (void)updateSettingsTimeWithSettingsResponse:(id)a0;
- (void)retryRequestWithAction:(int)a0 :(id)a1;
- (id)getLocalSettings;
- (id)getIapConfigModel;
- (id)getContainerConfig;
- (id)getThemeModelDic;
- (void)onReceiveSettingsPushData:(id)a0;
- (BOOL)shouldHandleSettingsPushData:(id)a0 :(id /* block */)a1;
- (void)fetchSettingsByPush;
- (void)handleMergedRequest;
- (void)safelyAddDeploy:(id)a0;
- (BOOL)isRepeatedPush:(id)a0 :(id /* block */)a1;
- (void)ensureProcessSettingsLogic:(id)a0 :(id)a1;
- (void)onAppBackground:(id)a0;
- (void)configLastConnectedTime;
- (void)recordConnectedTime:(id)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)fetchSettings:(id /* block */)a0;

@end
