@class NSDictionary, NSString;

@interface AWEPostPageGameCPTraceImpl : HTSService <AWEPublishTaskMessage, AWEPostPageGameCPTraceService>

@property (retain, nonatomic) NSDictionary *baseTraceInfo;
@property (retain, nonatomic) NSDictionary *gamePromoteTraceSettingDict;
@property (retain, nonatomic) NSDictionary *cacheAnchorListResDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)traceMonitorStep:(unsigned long long)a0 params:(id)a1;
- (void)configBaseTraceParams:(id)a0;
- (void)checkReportCache;
- (BOOL)traceStepEnable:(id)a0;
- (void)traceMonitorEvent:(id)a0 stepName:(id)a1 params:(id)a2 metric:(id)a3 category:(id)a4;
- (id)stepNameFromType:(unsigned long long)a0;
- (BOOL)isSaveToCache:(unsigned long long)a0 params:(id)a1;
- (void)traceMonitorStepName:(id)a0 params:(id)a1 metric:(id)a2 category:(id)a3;
- (BOOL)stepInBlockList:(id)a0;
- (BOOL)typeArray:(id)a0 hasTypeName:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
