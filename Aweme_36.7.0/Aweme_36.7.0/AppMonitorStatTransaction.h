@class NSString;

@interface AppMonitorStatTransaction : NSObject {
    NSString *_eventId;
    NSString *_module;
    NSString *_monitorPoint;
    NSString *_transactionId;
}

- (id)initWithEventId:(id)a0 module:(id)a1 monitorPoint:(id)a2;
- (void)beginWithMeasureName:(id)a0;
- (void)endWithMeasureName:(id)a0;
- (void).cxx_destruct;

@end
