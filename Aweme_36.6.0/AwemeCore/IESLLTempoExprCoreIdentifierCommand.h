@class NSString;

@interface IESLLTempoExprCoreIdentifierCommand : IESLLTempoExprCoreCommand

@property (readonly, nonatomic) NSString *identifier;

- (long long)execute:(id)a0 withEnv:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;

@end
