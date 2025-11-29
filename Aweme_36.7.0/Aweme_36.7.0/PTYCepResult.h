@class NSString, NSArray;

@interface PTYCepResult : NSObject

@property (nonatomic) BOOL isSuccess;
@property (copy, nonatomic) NSString *bizName;
@property (copy, nonatomic) NSString *ruleName;
@property (copy, nonatomic) NSString *warnings;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) NSArray *matchedEventsSequences;
@property (retain, nonatomic) NSArray *matchVariablesSequences;

- (id)initWithBizName:(id)a0 ruleName:(id)a1 errorMessage:(id)a2 warnings:(id)a3;
- (id)initWithBizName:(id)a0 ruleName:(id)a1 matchedEventsSequences:(id)a2 matchVariablesSequences:(id)a3;
- (id)initWithBizName:(id)a0 result:(const void *)a1;
- (void).cxx_destruct;

@end
