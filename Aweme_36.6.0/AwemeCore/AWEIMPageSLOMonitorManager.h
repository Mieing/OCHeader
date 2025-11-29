@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMPageSLOMonitorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pageTimerMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pageTimerQueue;
@property (retain, nonatomic) NSLock *timerMapLock;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)startPageMonitorWithConfig:(id)a0 withStage:(id)a1;
- (void)updateStageForPageId:(id)a0 toStage:(id)a1 withStageState:(long long)a2;
- (void)cancelTimerForPageUniqueId:(id)a0;
- (void)reportWithPageId:(id)a0 withStageState:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
