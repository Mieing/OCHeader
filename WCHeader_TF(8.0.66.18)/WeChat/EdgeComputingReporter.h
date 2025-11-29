@class EdgeComputingRtReportCache;

@interface EdgeComputingReporter : NSObject <PBMessageObserverDelegate> {
    EdgeComputingRtReportCache *m_realtimeReportCache;
    unsigned long long m_reportPeriod;
    unsigned long long m_lastReportTime;
}

- (id)init;
- (void)cahceRtStrData:(id)a0 withLogID:(unsigned int)a1 withConfigID:(id)a2;
- (void)cacheRtFieldData:(id)a0 withLogID:(unsigned int)a1 withConfigID:(id)a2;
- (void)batchRtReport;
- (void)kvReportStrData:(id)a0 withLogID:(unsigned int)a1;
- (void)kvReportFieldData:(id)a0 withLogID:(unsigned int)a1;
- (void)rtKVReportStrData:(id)a0 withLogID:(unsigned int)a1;
- (void)rtKVReportFieldData:(id)a0 withLogID:(unsigned int)a1;
- (void)realRtReport;
- (BOOL)reportItemsByCgi:(id)a0;
- (void)reportItemsByKv:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onSuccess:(id)a0 withNextPeriod:(unsigned long long)a1 withDropFlags:(id)a2;
- (void)onFailure:(id)a0;
- (void)onRealTimeKVReportSucceedWithWrap:(id)a0;
- (void)onRealTimeKVReportFailedWithWrap:(id)a0;
- (void).cxx_destruct;

@end
