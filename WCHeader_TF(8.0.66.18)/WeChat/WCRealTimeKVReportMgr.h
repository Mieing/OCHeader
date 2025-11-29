@class NSString, NSMutableDictionary;

@interface WCRealTimeKVReportMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    NSMutableDictionary *m_realTimeReport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)reportLogId:(unsigned int)a0 value:(id)a1 extKey:(id)a2;
- (id)reportLogId2:(unsigned int)a0 value:(id)a1 extKey:(id)a2;
- (id)realTimeReportWithWrap:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
