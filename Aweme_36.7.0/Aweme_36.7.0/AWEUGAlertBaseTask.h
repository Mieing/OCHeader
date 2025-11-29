@class NSString;

@interface AWEUGAlertBaseTask : NSObject

@property (copy, nonatomic) NSString *alertType;

- (BOOL)shouldTriggerWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlertType:(id)a0;

@end
