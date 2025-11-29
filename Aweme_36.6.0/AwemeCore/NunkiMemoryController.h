@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface NunkiMemoryController : NSObject {
    unsigned long long capacity;
    BOOL isStableCapacity;
    BOOL allowUnstableCapacity;
    BOOL trackerEnable;
    BOOL enable;
    BOOL systemMemoryEnable;
    BOOL supportiOS12;
    BOOL nunkiForceDangerLevelEnabled;
    BOOL nunkiForceRestrictLevelEnabled;
    int lastNotifyLevel;
    int lastNotifySystemPressure;
    int currentNotifySystemPressure;
    double lastWarningTime;
    unsigned long long sameLevelInterval;
    unsigned long long lowerLevelInterval;
    unsigned int loopInterval;
    unsigned int trackerSampleNumber;
    double doubleLevelLeeway;
    double doubleDangerLevel;
    double doubleRestrictLevel;
    double doubleNormalLevel;
    NSObject<OS_dispatch_queue> *innerQueue;
    NSObject<OS_dispatch_source> *memoryWarningSource;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;

+ (id)shared;

- (unsigned long long)getCurrentBytes;
- (void)addObserverUsingBlock:(id /* block */)a0;
- (void)notifyMemoryCost:(unsigned long long)a0;
- (int)getCurrentMemoryLevel;
- (int)getlastNotifyLevel;
- (int)getLastNotifySystemPressure;
- (BOOL)canApplyMemoryCost:(unsigned long long)a0;
- (unsigned long long)getCapacity;
- (BOOL)isOSVersionGreaterThanOrEqualTo:(long long)a0 minor:(long long)a1 patch:(long long)a2;
- (void)logStartState:(id)a0;
- (void)loopQuery;
- (void)postNotificationWithOption:(int)a0;
- (unsigned long long)getRemainingBytes;
- (void)tryNotifyWithLevel:(int)a0 usage:(double)a1;
- (void)logMemoryCostType:(id)a0 cost:(unsigned long long)a1 predictUsage:(double)a2 postLevel:(int)a3;
- (void).cxx_destruct;
- (double)getCurrentUsage;
- (void)start;
- (id)getUserInfo;

@end
