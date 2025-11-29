@class NSString, DataReportNewUBACacheWCDB, NSNumber;

@interface DataReportNewUBAReporter : MMUserService <MMServiceProtocol> {
    DataReportNewUBACacheWCDB *m_cacheDB;
    NSNumber *m_openNewUBASwitch;
    unsigned long long m_reportStrMaxLimit;
    NSNumber *m_isReportAllUBA;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)isOpenNewUBA;
- (BOOL)isReportAllUBA;
- (void)reportStandardEvent:(id)a0 time:(unsigned long long)a1 target:(id)a2 params:(id)a3;
- (void)reportKeyUBA:(id)a0 time:(unsigned long long)a1 target:(id)a2 data:(id)a3;
- (void)realReportKeyUBA:(id)a0 isKeyView:(BOOL)a1;
- (void)reportAllUBA:(id)a0 time:(unsigned long long)a1 data:(id)a2;
- (void)reportLogId:(unsigned long long)a0 time:(unsigned long long)a1;
- (void)reportFlutterAllOutEvent:(id)a0 time:(unsigned long long)a1 params:(id)a2;
- (void)realReportFlutterAllOutEvent;
- (id)getAllCache;
- (void).cxx_destruct;

@end
