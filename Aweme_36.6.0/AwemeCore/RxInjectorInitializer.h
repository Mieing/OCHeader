@class NSMethodSignature, NSArray;

@interface RxInjectorInitializer : NSObject

@property (retain, nonatomic) Class type;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL canAlloc;
@property (retain, nonatomic) NSMethodSignature *signature;
@property (retain, nonatomic) NSArray *argumentKeys;

+ (id)initializerWithClass:(Class)a0 selector:(SEL)a1 argumentKeys:(id)a2;
+ (id)initializerWithClass:(Class)a0 selector:(SEL)a1 argumentKeysArray:(id)a2;
+ (id)initializerWithClass:(Class)a0 classSelector:(SEL)a1 argumentKeys:(id)a2;
+ (id)initializerWithClass:(Class)a0 classSelector:(SEL)a1 argumentKeysArray:(id)a2;

- (id)initWithClass:(Class)a0 selector:(SEL)a1 argumentKeys:(id)a2;
- (id)initWithClass:(Class)a0 classSelector:(SEL)a1 argumentKeys:(id)a2;
- (id)initWithClass:(Class)a0 selector:(SEL)a1 argumentKeys:(id)a2 classSelector:(BOOL)a3;
- (id)nullify:(id)a0;
- (id)keyForArgumentAtIndex:(unsigned long long)a0;
- (id)rxPerform:(id)a0;
- (void).cxx_destruct;
- (void)validate;
- (id)target;
- (unsigned long long)numberOfArguments;

@end
