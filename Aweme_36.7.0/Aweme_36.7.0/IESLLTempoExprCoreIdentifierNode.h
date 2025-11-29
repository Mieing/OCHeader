@class NSString;

@interface IESLLTempoExprCoreIdentifierNode : IESLLTempoExprCoreBaseNode

@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (unsigned long long)type;

@end
