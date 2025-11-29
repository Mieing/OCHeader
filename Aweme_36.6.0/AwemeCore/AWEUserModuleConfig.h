@class NSString;

@interface AWEUserModuleConfig : NSObject

@property (class, readonly, copy, nonatomic) NSString *faqURL;
@property (class, readonly, copy, nonatomic) NSString *userAgreementURL;
@property (class, readonly, copy, nonatomic) NSString *privacyAgreementURL;
@property (class, readonly, copy, nonatomic) NSString *IDVerificationInfoURLString;
@property (class, readonly, copy, nonatomic) NSString *verifyIDURLtring;

+ (id)verifyIDURLtring;
+ (id)privacyAgreementURL;
+ (id)userAgreementURL;
+ (id)faqURL;
+ (id)IDVerificationInfoURLString;

@end
