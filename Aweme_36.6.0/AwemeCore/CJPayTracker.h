@class NSMutableDictionary, NSHashTable;
@protocol CJPayPerformanceDelegate, CJPayManagerBizDelegate, CJPayLibraProtocol;

@interface CJPayTracker : NSObject

@property (copy, nonatomic) NSHashTable *trackerDels;
@property (copy, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *mutableCommonDic;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } observerLock;
@property (weak, nonatomic) id<CJPayManagerBizDelegate> trackerDelegate;
@property (weak, nonatomic) id<CJPayPerformanceDelegate> performanceDelegate;
@property (weak, nonatomic) id<CJPayLibraProtocol> libraProtocolDelegate;

+ (void)event:(id)a0 params:(id)a1;
+ (id)p_createBTMParams:(id)a0 host:(id)a1 params:(id)a2;
+ (BOOL)p_enableBTM;
+ (id)getCommonTrackDic;
+ (void)event:(id)a0 params:(id)a1 logBlock:(id /* block */)a2;
+ (void)addCommonTrackDic:(id)a0;
+ (void)eventAllInOneWithName:(id)a0 params:(id)a1;
+ (void)eventBTMModuleCustom:(id)a0 params:(id)a1;
+ (void)__event:(id)a0 params:(id)a1 logBlock:(id /* block */)a2;
+ (void)fieldSpecificationDetectionWithParams:(id)a0 logBlock:(id /* block */)a1 callBack:(id /* block */)a2;
+ (id)p_commonTrackDic;
+ (void)checkEventSizeIsOverThreshold:(id)a0 params:(id)a1;
+ (Class)trackerCls;
+ (void)reportAlogWithEvent:(id)a0 params:(id)a1 log:(id)a2;
+ (void)reportWhiteListEvent:(id)a0 params:(id)a1 logBlock:(id /* block */)a2;
+ (void)reportTeaCostWithEvent:(id)a0 cost:(double)a1;
+ (void)specificationCheckWithParams:(id)a0 log:(id)a1;
+ (void)eventBTMModuleShow:(id)a0 params:(id)a1;
+ (void)eventBTMModuleClick:(id)a0 params:(id)a1;
+ (id)shared;

- (BOOL)hasTrackerObserver:(id)a0;
- (void)addTrackerObserver:(id)a0;
- (void)removeTrackerDelegate:(id)a0;
- (void)addTrackerDelegate:(id)a0;
- (BOOL)hasValidTrackerDelegate;
- (void)removeTrackerObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
