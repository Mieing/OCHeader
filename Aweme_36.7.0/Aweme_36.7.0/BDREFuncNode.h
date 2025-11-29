@class NSString, BDREFunc;

@interface BDREFuncNode : BDREBaseNode

@property (retain, nonatomic) BDREFunc *func;
@property (copy, nonatomic) NSString *funcName;

- (id)initWithFuncName:(id)a0 func:(id)a1 originValue:(id)a2 index:(unsigned long long)a3;
- (void).cxx_destruct;

@end
