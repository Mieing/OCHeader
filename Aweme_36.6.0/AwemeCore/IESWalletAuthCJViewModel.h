@class NSString;

@interface IESWalletAuthCJViewModel : NSObject

@property (copy, nonatomic) NSString *privacyName;
@property (copy, nonatomic) NSString *privacyID;
@property (copy, nonatomic) NSString *authAgreementURL;
@property (copy, nonatomic) NSString *CJAccountAgreementURL;
@property (copy, nonatomic) NSString *CJPrivacyAgreementURL;

- (void).cxx_destruct;
- (id)init;

@end
