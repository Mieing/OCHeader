@class NSString;

@interface AWESECAppJumpAppLinkRule : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *regex;

+ (id)appLinkRuleWithPattern:(id)a0;

- (BOOL)matchRegexWithURL:(id)a0;
- (long long)matchWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
