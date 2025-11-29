@class NSMutableDictionary, NSMapTable, NSTimer, NSString, NSMutableArray;

@interface AWESmartTimerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *timerInfos;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } infoLock;
@property (retain, nonatomic) NSMapTable *timerMaps;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double currentInterval;
@property (retain, nonatomic) NSString *info;

+ (BOOL)prf_addSmartTimer:(id)a0 forMode:(id)a1 runloop:(id)a2;
+ (void)prf_smartTimer:(id)a0 withTarget:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (BOOL)canScheduledBySmartTimerWithTarget:(id)a0 selector:(SEL)a1 userInfo:(id)a2 repeats:(BOOL)a3;
+ (void)prf_scheduledSmartTimer:(id)a0 target:(id)a1 selector:(SEL)a2;
+ (void)prf_smartTimer:(id)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
+ (BOOL)canScheduledBySmartTimerWithRepeats:(BOOL)a0;
+ (void)prf_scheduledSmartTimer:(id)a0 block:(id /* block */)a1;
+ (double)unifiedInterval;
+ (long long)separateFactor;
+ (BOOL)enableDesInfo;
+ (BOOL)enable;
+ (id)shared;

- (id)descriptionInfo;
- (void)updateDescriptionInfo;
- (void)fireTimerOnce:(id)a0;
- (void)setFireDate:(id)a0 forTimer:(id)a1;
- (void)addTimerInfo:(id)a0 key:(id)a1;
- (void)removeTimerInfoForkey:(id)a0;
- (BOOL)canAggregateWithTimer:(id)a0;
- (void)subscribeWithTimer:(id)a0 runloopMode:(id)a1;
- (void)updateTimerIntervalIfNeeded;
- (void)involveTimerWithSubscriber:(id)a0;
- (void)timerTickWithIndex:(long long)a0 factor:(long long)a1;
- (void)unsubscribeTimer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)timerTick;

@end
