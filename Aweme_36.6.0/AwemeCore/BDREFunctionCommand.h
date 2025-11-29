@class NSString, BDREFunc;

@interface BDREFunctionCommand : BDRECommand

@property (retain, nonatomic) BDREFunc *func;
@property (copy, nonatomic) NSString *funcName;
@property (nonatomic) unsigned long long argsNumber;

- (void)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (id)initWithFuncName:(id)a0 func:(id)a1 argsLength:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)instruction;

@end
