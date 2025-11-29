@class NSString;

@interface AWEIMMonitorManager : NSObject <IESIMMonitorManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesim_trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (BOOL)msgDBTraceMainThread;
- (BOOL)shouldTrackLaunchIO;
- (void)iesim_trackData:(id)a0 logTypeStr:(id)a1;
- (void)iesim_trackService:(id)a0 attributes:(id)a1;
- (void)iesim_trackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)iesim_doubleTrackEvent:(id)a0 status:(long long)a1 params:(id)a2;
- (void)iesim_applogTrackEvent:(id)a0 params:(id)a1;
- (void)iesim_trackThreadLogWithType:(id)a0 parameter:(id)a1 callback:(id /* block */)a2;
- (void)iesim_monitorTrackService:(id)a0 status:(long long)a1 params:(id)a2;
- (void)iesim_traceThreadWithScene:(id)a0 params:(id)a1;
- (BOOL)iesim_shouldTrackEvent:(id)a0;
- (void)iesim_dbMark:(id)a0 launchTime:(float)a1 cmdID:(int)a2;
- (void)iesim_dbMark:(id)a0 beginTime:(unsigned long long)a1;

@end
