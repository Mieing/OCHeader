@class NSString, NSDictionary;

@interface FBSDKMeasurementEvent : NSObject {
    NSString *_name;
    NSDictionary *_args;
}

+ (void)postNotificationForEventName:(id)a0 args:(id)a1;

- (void)postNotification;
- (id)initEventWithName:(id)a0 args:(id)a1;
- (void).cxx_destruct;

@end
