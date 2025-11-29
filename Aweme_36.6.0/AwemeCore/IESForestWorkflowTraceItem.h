@class NSString;

@interface IESForestWorkflowTraceItem : NSObject

@property (copy, nonatomic) NSString *step;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long code;

- (id)initWithStep:(id)a0 code:(long long)a1 message:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
