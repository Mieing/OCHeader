@class NSString, NSMutableArray, NSMutableDictionary;

@interface MMWebJSLogMgr : MMUserService <PBMessageObserverDelegate, CNetworkStatusExt, MMServiceProtocol> {
    NSMutableArray *logList;
    NSMutableDictionary *invalidLogDic;
    BOOL cgiRunning;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)loadInvalidLogDic;
- (void)saveInvalidLogDic;
- (id)pathForInvalidLogCache;
- (void)filterInvalidLogItem;
- (BOOL)isInvaildWithLogId:(unsigned int)a0;
- (void)handleRespInvalidLogList:(id)a0;
- (BOOL)addJSLog:(unsigned int)a0 logExt:(id)a1 type:(unsigned int)a2;
- (id)getKVLogHead;
- (void)tryRealtimeReport;
- (void)realtimeReport;
- (id)getReportPackage;
- (unsigned int)getMaxSendSize;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
