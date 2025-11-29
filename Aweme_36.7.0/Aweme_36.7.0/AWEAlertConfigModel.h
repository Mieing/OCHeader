@class NSString, NSNumber;

@interface AWEAlertConfigModel : NSObject

@property (retain, nonatomic) Class eventClass;
@property (copy, nonatomic) NSString *alertID;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *eventClassName;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL cancelOtherAlerts;
@property (copy, nonatomic) NSString *lynxURL;
@property (retain, nonatomic) NSNumber *lynxURLTimeout;
@property (copy, nonatomic) NSString *lynxControllerURL;
@property (retain, nonatomic) NSNumber *lynxControllerURLTimeout;

- (void).cxx_destruct;

@end
