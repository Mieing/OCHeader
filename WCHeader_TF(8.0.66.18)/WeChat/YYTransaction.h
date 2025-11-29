@interface YYTransaction : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;

+ (void)load;
+ (id)transactionWithTarget:(id)a0 selector:(SEL)a1;

- (void)commit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
