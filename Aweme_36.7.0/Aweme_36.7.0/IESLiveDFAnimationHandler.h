@interface IESLiveDFAnimationHandler : NSObject

@property (copy, nonatomic) id /* block */ readBlock;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ compatibleBlock;
@property (copy, nonatomic) id /* block */ bezierUpdateBlock;
@property (copy, nonatomic) id /* block */ beziercompatibleBlock;
@property (copy, nonatomic) id /* block */ updatebezierPathBlock;

+ (id)hanlderWithRead:(id /* block */)a0 update:(id /* block */)a1 compatible:(id /* block */)a2;
+ (id)hanlderWithRead:(id /* block */)a0 bezierUpdateBlock:(id /* block */)a1 compatible:(id /* block */)a2;
+ (id)hanlderWithBezierPathUpdate:(id /* block */)a0;

- (void).cxx_destruct;

@end
