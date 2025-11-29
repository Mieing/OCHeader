@interface HMDOCMethod : NSObject

@property (readonly, nonatomic, getter=isInstanceMethod) BOOL instanceMethod;
@property (readonly, nonatomic, getter=isClassMethod) BOOL classMethod;
@property (readonly, nonatomic) Class methodClass;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) struct objc_method { } *method;
@property unsigned long long status;

+ (id)methodWithString:(id)a0;

- (id)initWithClass:(Class)a0 selector:(SEL)a1 method:(struct objc_method { } *)a2 classMethod:(BOOL)a3;
- (BOOL)isEqualToMethod:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
