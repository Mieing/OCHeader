@class NSString, NSMutableString, NSSet;

@interface ClickStreamMgr : MMRootService <MMServiceProtocol> {
    struct timeval { long long tv_sec; int tv_usec; } m_tvStart;
    NSString *m_nsLastPageID;
    NSString *m_nsInterruptPageID;
    NSMutableString *m_nsReport;
    NSSet *m_setIgnorePageIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)activePage:(id)a0;
- (void)inActivePage:(id)a0;
- (id)genRedunDantReport;
- (void)writeReportLog:(BOOL)a0;
- (void)checkWriteReportLog;
- (void)recordPage:(id)a0 withTime:(long long)a1;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)getClickStreamReport;
- (void)clearClickStreamReport;
- (void)insertWithKey:(id)a0 Value:(id)a1;
- (void).cxx_destruct;

@end
