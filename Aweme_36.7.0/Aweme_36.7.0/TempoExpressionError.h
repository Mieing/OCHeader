@interface TempoExpressionError : NSError

@property (nonatomic) int level;

- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
