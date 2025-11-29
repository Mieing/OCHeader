@class NSString, NSNumber, NSDate;

@interface RTVVoipPerformanceMonitorPinItem : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, nonatomic) NSNumber *durationValue;

- (id)initWithDate:(id)a0 token:(id)a1 duration:(id)a2;
- (id)__dateDescriptionWithDate:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
