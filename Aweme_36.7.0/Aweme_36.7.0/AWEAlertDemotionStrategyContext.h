@class NSString, NSObject;

@interface AWEAlertDemotionStrategyContext : NSObject

@property (retain, nonatomic) NSObject *alert;
@property (copy, nonatomic) NSString *alertID;
@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) long long priority;

- (void).cxx_destruct;

@end
