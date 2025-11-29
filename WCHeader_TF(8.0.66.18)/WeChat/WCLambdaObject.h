@interface WCLambdaObject : NSObject

@property (copy, nonatomic) id /* block */ lambdaAction;

+ (id)createWithLambda:(id /* block */)a0;

- (id)initWithLambda:(id /* block */)a0;
- (void)executeWithData:(id)a0;
- (void)execute;
- (void).cxx_destruct;

@end
