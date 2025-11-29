@class NSString, WCPayAuthenRequestRetryInfo;

@interface WCPaySetWCPayPasswordStruct : NSObject

@property (retain, nonatomic) NSString *m_nsWCPayPassword;
@property (retain, nonatomic) NSString *m_nsRequestKey;
@property (nonatomic) unsigned int m_uiPayScene;
@property (nonatomic) unsigned int m_uiPayChannel;
@property (retain, nonatomic) NSString *m_nsToken;
@property (retain, nonatomic) NSString *m_nsVerifyCode;
@property (retain, nonatomic) NSString *m_nsUUID;
@property (retain, nonatomic) NSString *m_nsAppID;
@property (retain, nonatomic) NSString *m_nsAppName;
@property (retain, nonatomic) NSString *m_nsAppSource;
@property (nonatomic) unsigned int m_cardBankTag;
@property (nonatomic) BOOL m_bIsAutoDeduct;
@property (copy, nonatomic) NSString *autoDeductBankType;
@property (copy, nonatomic) NSString *autoDeductBankSerial;
@property (retain, nonatomic) WCPayAuthenRequestRetryInfo *m_retryInfo;

- (void).cxx_destruct;

@end
