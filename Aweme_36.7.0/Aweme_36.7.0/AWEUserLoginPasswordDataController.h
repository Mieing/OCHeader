@class NSString, DYPhoneNumberModel;

@interface AWEUserLoginPasswordDataController : AWEUserLoginBaseDataController

@property (retain, nonatomic) DYPhoneNumberModel *phoneNumber;
@property (retain, nonatomic) NSString *password;

- (void)handleSuccess;
- (void)handleError:(id)a0 ticket:(id)a1;
- (void)requestLoginPhoneNumberModel:(id)a0 password:(id)a1;
- (void)showForgetPassword:(id)a0;
- (void).cxx_destruct;

@end
