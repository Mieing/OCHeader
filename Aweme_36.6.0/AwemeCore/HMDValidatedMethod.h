@class NSString;

@interface HMDValidatedMethod : NSObject

@property (readonly, copy, nonatomic) NSString *validatedMethodName;
@property (readonly, copy, nonatomic) NSString *classString;
@property (readonly, copy, nonatomic) NSString *selectorString;
@property (readonly, nonatomic) Class clazz;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL isInstance;

- (id)initWithClassString:(id)a0 selectorString:(id)a1 clazz:(Class)a2 selector:(SEL)a3 isInstance:(BOOL)a4;
- (void).cxx_destruct;

@end
