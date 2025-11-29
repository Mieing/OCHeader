@class NSString, NSDictionary;

@interface BFMeasurementEvent : NSObject {
    NSString *_name;
    NSDictionary *_args;
}

+ (void)postNotificationForEventName:(id)a0 args:(id)a1;

- (id)initEventWithName:(id)a0 args:(id)a1;
- (void).cxx_destruct;
- (void)postNotification;

@end
