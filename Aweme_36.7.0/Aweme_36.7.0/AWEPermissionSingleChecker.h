@interface AWEPermissionSingleChecker : NSObject

@property (copy, nonatomic) id /* block */ checker;
@property (copy, nonatomic) id /* block */ actionModelConstructor;

- (id)initWithChecker:(id /* block */)a0 actionModelContructor:(id /* block */)a1;
- (void).cxx_destruct;

@end
