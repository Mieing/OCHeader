@class NSString;

@interface HTSLiveTwoElementAgreement : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *agreementText;
@property (copy, nonatomic) NSString *agreementURL;

+ (id)descriptor;

@end
