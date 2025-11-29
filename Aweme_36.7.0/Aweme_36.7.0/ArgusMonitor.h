@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ArgusMonitor : NSObject

@property (retain, nonatomic) NSDictionary *aspectReportCountRecord;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } aspectReportCountRecordLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportQueue;

+ (void)reportSlardar:(long long)a0 verifyAction:(long long)a1 reportConfig:(id)a2 category:(id)a3 metric:(id)a4;
+ (id)aspectReportLimitMap;
+ (void)reportTea:(id)a0 data:(id)a1;
+ (id)sharedInstance;
+ (void)report:(id)a0;

- (BOOL)shouldReport:(id)a0;
- (id)innerReport:(id)a0;
- (id)joinVerifyResultRecord:(id)a0;
- (id)shouldReportTea:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)report:(id)a0;

@end
