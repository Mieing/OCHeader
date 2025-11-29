@class NSTimer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WXGRoamBackupStatusManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskStatuses;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) NSTimer *cleanupTimer;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)setupCleanupTimer;
- (unsigned long long)calculateNotifyCode:(int)a0 taskState:(int)a1;
- (BOOL)isCompletedStatus:(unsigned long long)a0;
- (BOOL)shouldPrioritize:(unsigned long long)a0 over:(unsigned long long)a1;
- (void)notifyStatusChanged:(id)a0;
- (void)updateTaskStatus:(unsigned long long)a0 taskType:(int)a1 taskState:(int)a2 progress:(int)a3 currentCount:(unsigned long long)a4 totalCount:(unsigned long long)a5;
- (void)removeTaskStatus:(unsigned long long)a0;
- (id)getAllTaskStatuses;
- (id)getHighestPriorityTaskStatus;
- (id)getTaskStatus:(unsigned long long)a0;
- (void)cleanupExpiredStatuses;
- (BOOL)isMultiPackageBackingup;
- (BOOL)isMultiPackageHasBannerStatus;
- (void).cxx_destruct;

@end
