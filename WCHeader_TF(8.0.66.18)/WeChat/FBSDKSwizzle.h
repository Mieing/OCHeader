@class NSMapTable;

@interface FBSDKSwizzle : NSObject

@property (nonatomic) Class class;
@property (nonatomic) SEL selector;
@property (nonatomic) void /* function */ *originalMethod;
@property (nonatomic) unsigned int numArgs;
@property (copy, nonatomic) NSMapTable *blocks;

- (id)init;
- (id)initWithBlock:(id /* block */)a0 named:(id)a1 forClass:(Class)a2 selector:(SEL)a3 originalMethod:(void /* function */ *)a4 withNumArgs:(unsigned int)a5;
- (id)description;
- (void).cxx_destruct;

@end
