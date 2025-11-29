@interface JSC2Helper : NSObject

+ (BOOL)osVersionInWhiteList:(id)a0;
+ (BOOL)osVersionInBlackList:(id)a0;
+ (BOOL)systemCanHook;
+ (BOOL)abtestCanHook;
+ (BOOL)abtestCanEnableByteCode;
+ (BOOL)canGlobalHook;
+ (BOOL)enableFastGC;
+ (void)enableXPC;
+ (BOOL)shouldOSLogTrace;
+ (BOOL)shouldOSLogStore;
+ (void)enableOSLogTrace;
+ (BOOL)enableOSLogRedirect;
+ (BOOL)enableOSLogTraceHook;
+ (BOOL)enableWebKitLogStore;
+ (void)setupOSLogStore;
+ (BOOL)fetchOSLogWithDate:(id)a0 subsystem:(id)a1 limit:(long long)a2 includingXPC:(BOOL)a3;
+ (void)predicate4Format:(id)a0 argumentArray:(id)a1;
+ (void)extraPredicate4Format:(id)a0 argumentArray:(id)a1;
+ (BOOL)fetchOSLogWithDate:(id)a0 subsystems:(id)a1 limit:(long long)a2 includingXPC:(BOOL)a3;
+ (void)setupOptions;
+ (void)commonSetup;
+ (void)enableLogEvaluateDetail;
+ (BOOL)hasJSCRun;
+ (BOOL)isErrorOrRunning;
+ (int)errCode;
+ (void)startHook;
+ (void)startHook2;
+ (void)hook;
+ (void)hook2;
+ (void)checkClasses;
+ (void)enableCEvaluateJSScriptIfNeeded;

@end
