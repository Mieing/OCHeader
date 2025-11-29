@interface YYTextTransaction : NSObject

@property (retain, nonatomic) id target;
@property (nonatomic) SEL selector;

+ (id)transactionWithTarget:(id)a0 selector:(SEL)a1;

- (void).cxx_destruct;
- (void)commit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
