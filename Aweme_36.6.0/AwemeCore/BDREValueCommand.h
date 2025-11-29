@interface BDREValueCommand : BDRECommand

@property (retain, nonatomic) id value;

- (void)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)instruction;

@end
