@interface AFDWCTExprWrapper : NSObject

@property (copy, nonatomic) id /* block */ exprBlock;
@property (copy, nonatomic) id /* block */ propertyBlock;
@property (copy, nonatomic) id /* block */ orderBlock;

- (id)initWithOrderList:(id /* block */)a0;
- (id)initWithExprBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithPropertyList:(id /* block */)a0;

@end
