@class NSString;

@interface SECRESimpleFunc : BDREFunc

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ executor;

- (id)initWithName:(id)a0 executor:(id /* block */)a1;
- (id)symbol;
- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;

@end
