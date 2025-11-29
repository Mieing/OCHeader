@class BaseRequest, NSString;

@interface PrivacyPolicyChoiseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int choise;
@property (retain, nonatomic) NSString *privacyPolicyCountry;
@property (retain, nonatomic) NSString *guidanceScene;

+ (void)initialize;

@end
