@class RxScheduler, NSMutableDictionary, NSString;
@protocol RTVMonitor, RxInjector, RTVPerformanceMonitorDelegate;

@interface RTVPerformanceMonitor : NSObject <RTVPerformanceMonitorInterface>

@property (weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) NSMutableDictionary *attributesMapper;
@property (retain, nonatomic) RxScheduler *scheduler;
@property (retain, nonatomic) id<RTVMonitor> rtvMonitor;
@property (weak, nonatomic) id<RTVPerformanceMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)fetchCurrentDurationForMarker:(id)a0;
- (id)fetchCurrentDurationSinceToken:(id)a0 forMarker:(id)a1;
- (void)clearDataForMarker:(id)a0;
- (id)attributesWithMarker:(id)a0;
- (id)containToken:(id)a0 forMarker:(id)a1;
- (void)updateAttributesWithMarker:(id)a0 appendDictionary:(id)a1;
- (void)updateAttributesWithMarker:(id)a0 removeKeys:(id)a1;
- (void)startTimedEventWithMarker:(id)a0 attributes:(id)a1;
- (void)startTimedEventWithMarker:(id)a0;
- (id)startTimedEventAttributes:(id)a0;
- (id)isTimedEventRecordedWithMarker:(id)a0;
- (id)endTimedEventForMarker:(id)a0;
- (void)endTimedEventForStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 data:(id)a3;
- (void)endTimedEventForNullableStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 data:(id)a3;
- (void)endTimedEventForStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 extraDictionaryBlock:(id /* block */)a3;
- (void)pinTimerIntervalSinceStartWithToken:(id)a0 forMarker:(id)a1;
- (void)__startTimedEventWithMarker:(id)a0 attributes:(id)a1;
- (id)__attributesWithMarker:(id)a0;
- (void)__clearDataForMarker:(id)a0;
- (id)__fetchDurationSinceStartTimeForMarker:(id)a0;
- (id)__endTimedEventForMarker:(id)a0;
- (void)__endTimedEventForStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 enableNullableStartMaker:(BOOL)a3 dictionaryBlock:(id /* block */)a4;
- (void)__endTimedEventForStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 data:(id)a3;
- (void)__endTimedEventForStartMarker:(id)a0 withService:(id)a1 status:(long long)a2 dictionaryBlock:(id /* block */)a3;
- (void)__updateAttributesWithMarker:(id)a0 appendDictionary:(id)a1;
- (void)__updateAttributesWithMarker:(id)a0 removeKeys:(id)a1;
- (double)__currentTime;
- (id)__multipleAttributesWithMarker:(id)a0;
- (long long)__dictionary:(id)a0 longlongValueForKey:(id)a1 defaultValue:(long long)a2;
- (id)__fetchDurationSinceStartTimeForMarker:(id)a0 enableNullableStartMaker:(BOOL)a1;
- (id)__fetchStartTimeForMarker:(id)a0;
- (void)__metric:(id)a0 setDuration:(id)a1 forKey:(id)a2;
- (id)__metricFromAttributes:(id)a0;
- (void).cxx_destruct;

@end
