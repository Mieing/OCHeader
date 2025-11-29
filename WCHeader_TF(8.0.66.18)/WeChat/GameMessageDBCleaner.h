@interface GameMessageDBCleaner : NSObject {
    unsigned int interactiveMaxCount;
    unsigned int interactiveMaxRetentionDays;
    unsigned int notifyMaxCount;
    unsigned int notifyMaxRetentionDays;
    unsigned int reddotMaxRetentionDays;
    BOOL enableCleanStrategy;
    unsigned int checkIntervalDays;
    BOOL shouldStopTask;
    double timeTaskStart;
}

- (void)initSetting;
- (BOOL)getConfigFromGlobalConfig;
- (void)makeDefaultValue;
- (void)clean;
- (void)uninit;
- (void)onAppEnterBackground;
- (void)onAppEnterForeground;
- (void)onAppWillClose;
- (void)onUserLogout;
- (BOOL)checkCleanFrequency;
- (void)cleanDBExecute;
- (void)cleanRedDot;
- (void)cleanNotifyMsg;
- (void)cleanInteractiveMsg;
- (void)reportStart;
- (void)reportComplete;
- (void)reportDBSize;
- (void)reportStatus:(id)a0;

@end
