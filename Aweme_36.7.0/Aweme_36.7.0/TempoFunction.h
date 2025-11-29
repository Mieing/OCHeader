@class TempoVariableZone, NSString, NSArray, TempoExecuteFunction;

@interface TempoFunction : NSObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *paramNames;
@property (nonatomic) void *functionAST;
@property (retain, nonatomic) TempoExecuteFunction *defineInFunction;
@property (retain, nonatomic) TempoVariableZone *capturedVariableZone;

- (id)executeFunctionWithArgs:(id)a0 context:(id)a1;
- (id)executeFunctionWithArgs:(id)a0 executor:(void *)a1;
- (void).cxx_destruct;

@end
