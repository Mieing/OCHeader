@class NSLock, NSString, NSMutableDictionary;

@interface BDPOnlineTimeReportedTaskManager : NSObject <BDPWarmBootMessage> {
    NSMutableDictionary *_tasks;
}

@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (id)getTaskWithUniqueId:(id)a0;
- (void)removeTaskWithUniqueId:(id)a0;
- (void)addTask:(id)a0 uniqueId:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
