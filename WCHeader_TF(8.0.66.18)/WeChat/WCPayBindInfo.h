@class NSString, UnderAgeDialog;

@interface WCPayBindInfo : NSObject

@property (nonatomic) unsigned int m_flag;
@property (retain, nonatomic) NSString *m_cardBankType;
@property (retain, nonatomic) NSString *m_cardBankName;
@property (nonatomic) unsigned int m_cardBankTag;
@property (nonatomic) unsigned int m_cardType;
@property (retain, nonatomic) NSString *m_cardTypeName;
@property (retain, nonatomic) NSString *m_cardNumber;
@property (retain, nonatomic) NSString *m_usrNameInfo;
@property (retain, nonatomic) NSString *m_userIDType;
@property (retain, nonatomic) NSString *m_usrIDInfo;
@property (retain, nonatomic) NSString *m_validDate;
@property (retain, nonatomic) NSString *m_cvvInfo;
@property (retain, nonatomic) NSString *m_usrPhoneNumber;
@property (retain, nonatomic) NSString *m_payPassword;
@property (retain, nonatomic) NSString *m_nsTenpayBindSerialNo;
@property (retain, nonatomic) NSString *m_nsQQID;
@property (retain, nonatomic) NSString *m_nsImportCode;
@property (retain, nonatomic) NSString *m_nsToken;
@property (retain, nonatomic) NSString *m_WCLanguage;
@property (retain, nonatomic) NSString *m_firstName;
@property (retain, nonatomic) NSString *m_lastName;
@property (retain, nonatomic) NSString *m_country;
@property (retain, nonatomic) NSString *m_area;
@property (retain, nonatomic) NSString *m_city;
@property (retain, nonatomic) NSString *m_address;
@property (retain, nonatomic) NSString *m_phoneNumber_Overseas;
@property (retain, nonatomic) NSString *m_email;
@property (retain, nonatomic) NSString *m_zipcode;
@property (retain, nonatomic) NSString *m_retKey;
@property (retain, nonatomic) NSString *m_arriveType;
@property (retain, nonatomic) NSString *m_creidRenewal;
@property (retain, nonatomic) NSString *m_birthDay;
@property (retain, nonatomic) NSString *m_creExpireDate;
@property (retain, nonatomic) NSString *m_creEffectDate;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSString *administrationAddress;
@property (copy, nonatomic) NSString *autoDeductBankType;
@property (copy, nonatomic) NSString *autoDeductBankSerial;
@property (retain, nonatomic) NSString *mobile_area;
@property (retain, nonatomic) NSString *m_checkPayJsapiToken;
@property (nonatomic) BOOL m_canPassPwd;
@property (retain, nonatomic) NSString *m_usertoken;
@property (retain) NSString *sessionId;
@property (retain) UnderAgeDialog *under_age_dialog;
@property unsigned int has_underage_alert;

- (void).cxx_destruct;

@end
