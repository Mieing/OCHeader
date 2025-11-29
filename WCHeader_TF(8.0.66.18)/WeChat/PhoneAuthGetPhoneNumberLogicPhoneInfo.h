@class NSString;

@interface PhoneAuthGetPhoneNumberLogicPhoneInfo : MMObject

@property (copy, nonatomic) NSString *mobile;
@property (copy, nonatomic) NSString *showMobile;
@property (nonatomic) BOOL isBindWechat;
@property (nonatomic) BOOL needAuth;
@property (nonatomic) BOOL allowSendSms;
@property (copy, nonatomic) NSString *encryptData;
@property (copy, nonatomic) NSString *iv;
@property (copy, nonatomic) NSString *cloudId;
@property (copy, nonatomic) NSString *data;

- (id)getResultDic;
- (void).cxx_destruct;

@end
