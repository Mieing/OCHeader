@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCToolsPerformanceTrackerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventsDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue;

+ (id)sharedInstance;

- (void)updateValue:(id)a0 ForEventName:(id)a1 eventId:(id)a2;
- (void)removeAllValuesForEventName:(id)a0;
- (id)retrieveValueForEventName:(id)a0 eventId:(id)a1;
- (id)retrieveValueForEventName:(id)a0;
- (void).cxx_destruct;

@end
