@class NSString;

@interface WCPayBindInfoSMS : NSObject

@property (nonatomic) unsigned int m_flag;
@property (retain, nonatomic) NSString *m_payPassword;
@property (retain, nonatomic) NSString *m_SMSMsg;
@property (retain, nonatomic) NSString *m_retKey;
@property (retain, nonatomic) NSString *bank_type;
@property (copy, nonatomic) NSString *autoDeductBankType;
@property (copy, nonatomic) NSString *autoDeductBankSerial;
@property (nonatomic) BOOL m_canPassPwd;
@property (retain, nonatomic) NSString *m_usertoken;
@property (retain) NSString *sessionId;

- (void).cxx_destruct;

@end
