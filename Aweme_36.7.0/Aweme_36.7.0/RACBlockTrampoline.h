@interface RACBlockTrampoline : NSObject

@property (readonly, copy, nonatomic) id block;

+ (id)invokeBlock:(id)a0 withArguments:(id)a1;

- (id)invokeWithArguments:(id)a0;
- (SEL)selectorForArgumentCount:(unsigned long long)a0;
- (id)performWith:(id)a0;
- (id)performWith:(id)a0 :(id)a1;
- (id)performWith:(id)a0 :(id)a1 :(id)a2;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11 :(id)a12;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11 :(id)a12 :(id)a13;
- (id)performWith:(id)a0 :(id)a1 :(id)a2 :(id)a3 :(id)a4 :(id)a5 :(id)a6 :(id)a7 :(id)a8 :(id)a9 :(id)a10 :(id)a11 :(id)a12 :(id)a13 :(id)a14;
- (void).cxx_destruct;
- (id)initWithBlock:(id)a0;

@end
