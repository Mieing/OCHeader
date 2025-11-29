@class NSString, WCPayAuthenRequestRetryInfo;

@interface WCPayAuthenticationPayVerifySMSStruct : NSObject {
    BOOL isAutoDeduct;
}

@property (nonatomic) unsigned int m_flag;
@property (nonatomic) unsigned int m_payScene;
@property (nonatomic) unsigned int m_payChannel;
@property (retain, nonatomic) NSString *m_payPassword;
@property (retain, nonatomic) NSString *m_payKey;
@property (retain, nonatomic) NSString *m_uuid;
@property (retain, nonatomic) NSString *m_payToken;
@property (retain, nonatomic) NSString *m_verifySMS;
@property (retain, nonatomic) NSString *m_appId;
@property (retain, nonatomic) NSString *m_appName;
@property (retain, nonatomic) NSString *m_appSource;
@property (retain, nonatomic) NSString *m_nsBankType;
@property (retain, nonatomic) NSString *m_nsBindSerial;
@property (retain, nonatomic) NSString *m_arriveType;
@property (nonatomic) BOOL m_bUseTouchID;
@property (nonatomic) BOOL m_bIsAutoDeduct;
@property (copy, nonatomic) NSString *autoDeductBankType;
@property (copy, nonatomic) NSString *autoDeductBankSerial;
@property (retain, nonatomic) NSString *orderReqKey;
@property (nonatomic) BOOL bIsLQTPay;
@property (retain, nonatomic) NSString *currentPayCardBankType;
@property (retain, nonatomic) WCPayAuthenRequestRetryInfo *m_retryInfo;
@property (retain, nonatomic) NSString *cre_tail;
@property (retain, nonatomic) NSString *cre_type;
@property (nonatomic) long long messageVerifyType;

- (void).cxx_destruct;

@end
