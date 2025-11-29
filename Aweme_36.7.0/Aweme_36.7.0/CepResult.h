@class NSString, NSArray;

@interface CepResult : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *ruleName;
@property (retain, nonatomic) NSString *error;
@property (retain, nonatomic) NSString *warnings;
@property (retain, nonatomic) NSArray *eventsSequences;

- (id)initRegisterResultBySuccess:(BOOL)a0 bizName:(id)a1 ruleName:(id)a2 error:(id)a3 warnings:(id)a4;
- (id)initProcessResultByBizName:(id)a0 ruleName:(id)a1 error:(id)a2 warnings:(id)a3 eventsSequences:(id)a4;
- (id)initProcessResultByBizName:(id)a0 ruleName:(id)a1 cResult:(const void *)a2;
- (void).cxx_destruct;

@end
