@class AWEDeviceCPULevelManager, NSString, NSHashTable, AWECPUDataConsumer, NSObject;
@protocol OS_dispatch_source;

@interface AWECPULevelManager : NSObject <AWEDeviceCPULevelManagerDelegate>

@property (nonatomic) double cpuUsage;
@property (nonatomic) double baseCpuUsage;
@property (nonatomic) long long cpuLevel;
@property (nonatomic) long long predictedCPULevel;
@property (retain, nonatomic) AWECPUDataConsumer *consumer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) AWEDeviceCPULevelManager *deviceCPULevelManager;
@property (nonatomic) long long deviceCPULevel;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSHashTable *predictionObservers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didUpdateDeviceCPULevel:(long long)a0 newLevel:(long long)a1;
- (void)produceCPUData;
- (void)notifyObserverCPUDataIfNeeded:(double)a0;
- (void)notifyObserverIfNeeded:(long long)a0 newLevel:(long long)a1;
- (void)notifyPredictionObserverIfNeeded:(long long)a0;
- (void)addPredictionObserver:(id)a0;
- (void)removePredictionObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithConfig:(id)a0;

@end
