@class NSMutableDictionary;

@interface TempoNotificationCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventToObservers;

- (void)publishEvent:(id)a0 parameters:(id)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 event:(id)a2;
- (void)removeObserver:(id)a0 event:(id)a1;
- (void)publishEvent:(id)a0 observer:(id)a1 parameters:(id)a2;
- (void)removeNilObjectForEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0;

@end
