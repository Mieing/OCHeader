@class MMHeavyUserDataSource, MMHeavyUserEvaluator, MMHeavyUserClassifier, NSString, MMStackReportConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MMHeavyUserMonitorMgr : MMUserService <MMHeavyUserDataSourceDelegate, MMHeavyUserClassifierDelegate, MMHeavyUserEvaluatorDelegate, MMStackReportConnectionDelegate, IDiskUsageMgr, MMServiceProtocol> {
    unsigned long long m_uiHeavyUserType;
    MMStackReportConnection *m_customInfoReporter;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    NSObject<OS_dispatch_queue> *m_heavyUsrQueue;
}

@property (retain, nonatomic) MMHeavyUserDataSource *heavyUserDataSource;
@property (retain, nonatomic) MMHeavyUserClassifier *heavyUserClassifier;
@property (retain, nonatomic) MMHeavyUserEvaluator *heavyUserEvaluator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getHeavyUserInfoPath;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)startCheckDiskSize;
- (void)onDiskUsageMgrFinishOneScan:(id)a0;
- (void)p_checkFirstReport;
- (id)getHeavyUserDataSource;
- (void)updateSessionCount:(unsigned long long)a0;
- (void)updateContactCount:(unsigned long long)a0;
- (void)updateWechatSize:(unsigned long long)a0;
- (void)addDumpCount;
- (void)updateFinderAEC:(double)a0;
- (void)updateLiveTime:(unsigned long long)a0;
- (void)clearCache;
- (void)onHeavyUserDataUpdate;
- (void)onHeavyUserTypeChange:(unsigned long long)a0;
- (void)p_reportHeavyUserSubtype:(unsigned long long)a0;
- (void)p_reportToMMTestWithHeavyUserType:(unsigned long long)a0;
- (void)p_updateIDKeySetting:(unsigned long long)a0;
- (void)onHeavyUserPointChange:(unsigned long long)a0;
- (void)onStackReportCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
