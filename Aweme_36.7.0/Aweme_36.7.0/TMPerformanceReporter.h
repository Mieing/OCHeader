@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TMPerformanceReporter : NSObject

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSMutableDictionary *apiCallInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)recordTimonStart;
+ (void)recordTimonEnd;
+ (void)recordTimonService:(id)a0 cost:(double)a1 sync:(BOOL)a2;
+ (void)reportTimonInitInfo:(id)a0;
+ (id)sharedInstance;

- (void)unLock;
- (void)recordParams:(id)a0 withKey:(id)a1;
- (void)recordStartTime:(id)a0 withKey:(id)a1;
- (void)recordEndTime:(id)a0 withKey:(id)a1;
- (void)reporterTimeConsumingWithKey:(id)a0;
- (void)recordTimeInfo:(id)a0 ForKey:(id)a1 withTime:(id)a2;
- (void)recordParamsInfo:(id)a0 withKey:(id)a1;
- (void)reporter:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (void)writeLock;
- (id)init;
- (void)readLock;

@end
