@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface PIANSRManager : NSObject <PIAWorkerDelegate>

@property (retain, nonatomic) NSRecursiveLock *locker;
@property (retain, nonatomic) NSMutableDictionary *NSRList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)handleMemoryWarning;
- (id)NSRContentForURL:(id)a0;
- (void)executeNSRWithURL:(id)a0 configuration:(id)a1;
- (id)findModelForURL:(id)a0;
- (void)NSRTimeOut:(id)a0;
- (void)reportNSRWorkerPerformance:(BOOL)a0 worker:(id)a1;
- (void)clearAllNSRContent;
- (void)PIAWorker:(id)a0 didReceiveError:(id)a1;
- (void)PIAWorker:(id)a0 didFetchScriptURL:(id)a1 fetchMetrics:(id)a2 error:(id)a3;
- (void)PIAWorker:(id)a0 didExecuteScriptURL:(id)a1 executeMetrics:(id)a2;
- (BOOL)NSRExistForURL:(id)a0;
- (void)storeNSRContent:(id)a0 URL:(id)a1;
- (BOOL)clearNSRContentForURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
