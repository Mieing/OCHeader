@class NSRegularExpression, NSString;

@interface BUJSInjectorRule : NSObject

@property (retain, nonatomic) NSRegularExpression *regExpression;
@property (copy, nonatomic) NSString *script;
@property (copy, nonatomic) NSString *regex;
@property (copy, nonatomic) NSString *key;

+ (id)ruleWithScript:(id)a0 withRegex:(id)a1 key:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
