@interface JSC2AutoreleaseObject : NSObject

@property (copy, nonatomic) id /* block */ block;

+ (id)valueWithBlock:(id /* block */)a0;

- (void)dealloc;

@end
