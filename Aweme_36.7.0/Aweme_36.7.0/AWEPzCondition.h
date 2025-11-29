@interface AWEPzCondition : NSObject

@property (copy, nonatomic) id /* block */ expr;

- (id)initWithExpr:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)eval:(id)a0;

@end
