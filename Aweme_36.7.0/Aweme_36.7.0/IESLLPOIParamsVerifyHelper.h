@interface IESLLPOIParamsVerifyHelper : NSObject

@property (nonatomic) BOOL hasRegistedRule;

+ (id)sharedHelper;

- (void)registeRuleVerifier;

@end
