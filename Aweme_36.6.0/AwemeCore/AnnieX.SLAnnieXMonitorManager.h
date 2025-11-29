@interface AnnieX.SLAnnieXMonitorManager : NSObject {
    void /* unknown type, empty encoding */ __rts_mSLMonitorHostSwitch;
    void /* unknown type, empty encoding */ __rts_mEnableLogService;
    void /* unknown type, empty encoding */ __rts_manager;
    void /* unknown type, empty encoding */ __rts_setupConfig;
    void /* unknown type, empty encoding */ __rts_settingsListeners;
    void /* unknown type, empty encoding */ __rts_reportListeners;
}

+ (id)getInstance;

- (void)fetchSettings;
- (BOOL)globalSwitch;
- (id)monitorConfig;
- (void)parseSettingsWithV2Response:(id)a0;
- (void)parseSettingsWithV2JSONSettings:(id)a0;
- (id)getSettingsListeners;
- (id)getMonitorWithSessionId:(id)a0;
- (void)releaseMonitorWithSessionId:(id)a0;
- (void)registerReportListener:(id)a0;
- (void)unregisterReportListener:(id)a0;
- (id)getReportListeners;
- (void).cxx_destruct;
- (id)init;
- (void)setup:(id)a0;

@end
