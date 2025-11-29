@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEThreadOptimize : NSObject <NunkiMessage, AWECPULevelObserverProtocol>

@property (nonatomic) BOOL hookAsync;
@property (nonatomic) BOOL hookAfter;
@property (retain, nonatomic) NSDictionary *nunkiScheduleDictionary;
@property (retain, nonatomic) NSMutableArray *dispatchSchedules;
@property (retain, nonatomic) NSMutableArray *instantSchedules;
@property (retain, nonatomic) NSMutableArray *nunkiScheduleKeys;
@property (retain, nonatomic) NSMutableArray *loadTriggerSchedules;
@property (retain, nonatomic) NSMutableArray *launchCompletionTriggerSchedules;
@property (retain, nonatomic) NSMutableArray *feedReadyTriggerSchedules;
@property (retain, nonatomic) NSMutableArray *backgroundTriggerSchedules;
@property (retain, nonatomic) NSMutableArray *foregroundTriggerSchedules;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *triggerQueue;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) long long cpuLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)simpleSetMainPriority:(int)a0 timing:(long long)a1;
+ (id)sharedInstance;

- (void)setupWithConfig:(id)a0;
- (void)didReceiveResourceNotification;
- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (id)instantCurrentScheduleByPthread:(struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *)a0 thread:(unsigned int)a1 recordPointer:(id *)a2;
- (id)instantMatchedScheduleFromList:(id)a0 mainThreadInfo:(struct thread_extended_info { unsigned long long x0; unsigned long long x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char x10[64]; } *)a1 threadInfo:(struct thread_extended_info { unsigned long long x0; unsigned long long x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; char x10[64]; } *)a2 threadQoS:(unsigned int)a3 currentIsMainThread:(BOOL)a4;
- (void)restoreInstantSchedules:(id)a0;
- (void)triggerInstantSchedules:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;

@end
