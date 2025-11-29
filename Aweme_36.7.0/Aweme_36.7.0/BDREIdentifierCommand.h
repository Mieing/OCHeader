@class NSString;

@interface BDREIdentifierCommand : BDRECommand

@property (copy, nonatomic) NSString *identifier;

- (void)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)instruction;

@end
