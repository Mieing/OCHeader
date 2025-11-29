@interface ExptDebugReportLogic : MMObject <PBMessageObserverDelegate>

- (void)dealloc;
- (void)sendStartMonitorKV:(id)a0;
- (void)stopMonitorKV:(id)a0;
- (void)sendKV:(unsigned int)a0 value:(id)a1;
- (void)sendPageAppear:(id)a0;
- (void)sendPageDisappear:(id)a0;
- (void)sendSession:(id)a0;
- (void)sendSvrPushXML:(id)a0 usrName:(id)a1 withType:(id)a2;
- (void)sendDebugInfo:(unsigned int)a0 key:(unsigned int)a1 content:(id)a2;
- (void)sendToSvr:(id)a0 byKey:(unsigned int)a1 scene:(unsigned int)a2 type:(unsigned int)a3;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
