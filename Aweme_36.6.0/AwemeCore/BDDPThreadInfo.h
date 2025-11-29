@class NSRegularExpression, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDDPThreadInfo : NSObject <AWECPULevelObserverProtocol>

@property (nonatomic) long long prevRecordMs;
@property (nonatomic) long long bootTimeMs;
@property (nonatomic) long long mainTid;
@property (nonatomic) long long index;
@property (nonatomic) int sampling;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mtx;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSRegularExpression *regex;
@property (retain, nonatomic) NSMutableDictionary *threadDetailMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)eventKey;

- (void)cpuLevelDidUpdate:(long long)a0 newLevel:(long long)a1;
- (void)thermalStateDidChange:(id)a0;
- (id)detailList;
- (void)onHMDWatchDogTimeout:(id)a0;
- (void)onHMDWatchDogMaybeHappen:(id)a0;
- (id)detailListWithSignal:(id)a0;
- (void)trackerThreadDetailList:(id)a0;
- (void)recordBootTime:(long long)a0;
- (void)updateSampling:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupNotifications;

@end
