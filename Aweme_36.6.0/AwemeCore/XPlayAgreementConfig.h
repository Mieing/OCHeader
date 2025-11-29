@class NSString;

@interface XPlayAgreementConfig : NSObject <XPlayAgreementConfig>

@property (copy, nonatomic) NSString *privacyAgreementText;
@property (copy, nonatomic) NSString *privacyAgreementUrl;
@property (copy, nonatomic) NSString *userAgreementText;
@property (copy, nonatomic) NSString *userAgreementUrl;
@property (copy, nonatomic) NSString *realNameAgreementText;
@property (copy, nonatomic) NSString *realNameAgreementUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
