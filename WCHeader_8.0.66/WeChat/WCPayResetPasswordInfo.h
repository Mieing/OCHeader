@class NSString;

@interface WCPayResetPasswordInfo : NSObject

@property (retain, nonatomic) NSString *m_cardBankName;
@property (retain, nonatomic) NSString *m_cardType;
@property (retain, nonatomic) NSString *m_cardTypeName;
@property (retain, nonatomic) NSString *m_cardNumber;
@property (retain, nonatomic) NSString *m_usrNameInfo;
@property (retain, nonatomic) NSString *m_usrIDType;
@property (retain, nonatomic) NSString *m_usrIDInfo;
@property (retain, nonatomic) NSString *m_usrPhoneNumber;
@property (retain, nonatomic) NSString *m_cardBankType;
@property (retain, nonatomic) NSString *m_cardCVV2;
@property (retain, nonatomic) NSString *m_cardValid;
@property (retain, nonatomic) NSString *m_retKey;
@property (nonatomic) BOOL m_bSelectOldCardToResetPwd;
@property (nonatomic) BOOL m_bRetry;
@property (nonatomic) unsigned int m_flag;
@property (nonatomic) unsigned int m_cardBankTag;
@property (retain, nonatomic) NSString *m_WCLanguage;
@property (retain, nonatomic) NSString *m_firstName;
@property (retain, nonatomic) NSString *m_lastName;
@property (retain, nonatomic) NSString *m_country;
@property (retain, nonatomic) NSString *m_city;
@property (retain, nonatomic) NSString *m_area;
@property (retain, nonatomic) NSString *m_address;
@property (retain, nonatomic) NSString *m_phoneNumber_Overseas;
@property (retain, nonatomic) NSString *m_zipCode;
@property (retain, nonatomic) NSString *m_email;
@property (retain, nonatomic) NSString *mobile_area;
@property (nonatomic) BOOL bIsResetPwdFromPayManage;
@property (retain, nonatomic) NSString *nsCardHolderCreValidTime;
@property (retain, nonatomic) NSString *nsCardHolderRenewalTime;
@property (retain, nonatomic) NSString *nsCardHolderBirthDay;

- (void).cxx_destruct;

@end
