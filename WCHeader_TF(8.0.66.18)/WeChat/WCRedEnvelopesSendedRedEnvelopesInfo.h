@class NSString;

@interface WCRedEnvelopesSendedRedEnvelopesInfo : NSObject

@property (nonatomic) unsigned long long m_enWCRedEnvelopesType;
@property (nonatomic) unsigned long long m_enWCRedEnvelopesKind;
@property (retain, nonatomic) NSString *m_nsSendTitle;
@property (nonatomic) unsigned int m_uiSendTime;
@property (retain, nonatomic) NSString *m_nsSendTime;
@property (nonatomic) long long m_lTotalAmount;
@property (nonatomic) long long m_lTotalNum;
@property (nonatomic) long long m_lRecNum;
@property (nonatomic) unsigned long long m_enWCRedEnvelopesStatus;
@property (nonatomic) unsigned int m_uiThxCount;
@property (retain, nonatomic) NSString *m_nsSendID;

- (void).cxx_destruct;

@end
