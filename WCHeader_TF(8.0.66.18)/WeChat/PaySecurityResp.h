@class WCPayDigitalCertPayManageResp, NSString, WalletLockInfo, PropertySecurityInfo, PaySecurityDialogInfo, WCPayBalancePrivacyInfo, BasicSecurityInfo;

@interface PaySecurityResp : NSObject

@property (copy, nonatomic) NSString *wx_security_title;
@property (copy, nonatomic) NSString *more_security_title;
@property (retain, nonatomic) BasicSecurityInfo *basic_security_item;
@property (retain, nonatomic) WCPayDigitalCertPayManageResp *cert_info;
@property (retain, nonatomic) WalletLockInfo *wallet_lock_info;
@property (retain, nonatomic) PropertySecurityInfo *property_security_info;
@property (retain, nonatomic) PaySecurityDialogInfo *dialog_info;
@property (retain, nonatomic) WCPayBalancePrivacyInfo *balance_privacy_info;
@property (nonatomic) int cert_encrypt_type;

+ (id)GenFromDictionary:(id)a0;

- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
