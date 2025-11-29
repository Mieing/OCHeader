@class JSApmABTestItem, NSDateFormatter, NSString;

@interface WCJSApmManager : MMRootService <IMatrixCustomIssueExt, IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) JSApmABTestItem *abtest;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weappInfoForName:(id)a0;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onExptItemListChange;
- (void)setup;
- (void)setupBacktrace;
- (void)setupWatchdog;
- (void)setupPower;
- (void)setupRunLoopMonitor;
- (id)getDiagnosticDirectory;
- (id)generateFilePathWithType:(long long)a0 ReportID:(id)a1;
- (long long)getDumpType:(id)a0;
- (id)getFileName:(id)a0;
- (void)upload:(id)a0;
- (void)onCustomIssue:(id)a0 uploadComplete:(BOOL)a1;
- (id)makeJsonArrayWithStack:(id)a0;
- (void)reportWithStack:(id)a0 type:(unsigned long long)a1 weappInfo:(id)a2 name:(id)a3;
- (void)reportWithThreads:(id)a0 type:(unsigned long long)a1 weappInfo:(id)a2 name:(id)a3;
- (void)logKVWithID:(id)a0 type:(unsigned long long)a1 duration:(unsigned int)a2;
- (void)setupJSC2;
- (void)hookJSC2;
- (void).cxx_destruct;

@end
