@interface TMREFunc : BDREFunc

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (id)execute:(id)a0 error:(id *)a1;

@end
