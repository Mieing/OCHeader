@class NSString;

@interface WCPayFacingReceiveMoneyMessageStruct : NSObject

@property (nonatomic) int m_enWCPayFacingReceiveMoneyScene;
@property (retain, nonatomic) NSString *m_nsTransactionID;
@property (retain, nonatomic) NSString *m_nsUserName;
@property (retain, nonatomic) NSString *m_nsDisplayName;
@property (nonatomic) unsigned int m_uiTimeStamp;
@property (nonatomic) long long m_llFee;
@property (retain, nonatomic) NSString *m_nsFeeType;
@property (retain, nonatomic) NSString *m_voiceContent;
@property (nonatomic) int m_enWCPayFacingReceiveMoneyStatus;
@property (retain, nonatomic) NSString *m_nsOutTradeNo;
@property (retain, nonatomic) NSString *m_nsType;
@property (nonatomic) long long m_n64SvrId;
@property (nonatomic) unsigned int m_expireTime;
@property (retain, nonatomic) NSString *mchPayerHeadImgUrl;
@property (nonatomic) int codeType;

- (void).cxx_destruct;

@end
