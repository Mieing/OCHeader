@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDPDiagnoseLog : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue;
@property (retain, nonatomic) NSMutableDictionary *excceedSizeMap;

+ (id)keyWithAppID:(id)a0;
+ (void)saveConfig:(id)a0 appID:(id)a1;
+ (BOOL)logModeIsEnabled:(id)a0;
+ (void)enableLogMode:(BOOL)a0 appID:(id)a1;
+ (void)saveKey:(id)a0 value:(id)a1 appID:(id)a2;
+ (id)getKeyWithAppID:(id)a0 key:(id)a1;
+ (id)logJsonWithPhase:(id)a0 dataDict:(id)a1;
+ (void)removeStorageWithAppID:(id)a0;
+ (id)sharedInstance;
+ (id)getConfig:(id)a0;

- (void)removeLogFile:(id)a0;
- (void)writeDiagnoseLog:(id)a0 appID:(id)a1 shouldAppend:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_executeBlockInDiagnoseQueue:(id /* block */)a0;
- (id)logFile:(id)a0;
- (id)logsDir;
- (void)writeDiagnoseLog:(id)a0 appID:(id)a1 shouldAppend:(BOOL)a2;
- (BOOL)logWasTrimmed:(id)a0;
- (void)getLogDataWithUnqiueID:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
