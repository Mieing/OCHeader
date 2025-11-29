@class NSRecursiveLock, NSMutableDictionary, MMTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MMLiveAutoTestMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *logQueues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dumpQueue;
@property (retain, nonatomic) MMTimer *scheduleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)autoTestAssertTypes;

- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)logWithType:(id)a0 message:(id)a1;
- (void)dumpCheckLogToFile;
- (id)logQueue:(id)a0;
- (void)resetLogQueue:(id)a0;
- (void)stopScheduleTimer;
- (void)pauseScheduleTimer;
- (void)resumeScheduleTimer;
- (void)startScheduleTimer:(unsigned long long)a0;
- (void).cxx_destruct;

@end
