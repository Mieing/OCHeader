@interface IESECTaskTransaction : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (retain, nonatomic) id object1;
@property (retain, nonatomic) id object2;
@property (nonatomic) long long numberOfArgs;
@property (nonatomic) double timestamp;

+ (id)transactionWithTarget:(id)a0 selector:(SEL)a1;
+ (id)transactionWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
+ (id)transactionWithTarget:(id)a0 selector:(SEL)a1 object1:(id)a2 object2:(id)a3;
+ (id)transactionWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (void)commit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
