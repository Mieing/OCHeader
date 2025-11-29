@class NSData, UDRCommonRules;

@interface UDRMatchRule : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *systemRules;
@property (retain, nonatomic) UDRCommonRules *appRules;
@property (retain, nonatomic) UDRCommonRules *projectRules;
@property (retain, nonatomic) UDRCommonRules *resourceRules;

+ (void)initialize;

@end
