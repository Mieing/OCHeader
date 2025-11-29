@class NSString;

@interface WCRedEnvelopesReceivedRedEnvelopesInfo : NSObject

@property (retain, nonatomic) NSString *m_nsSenderName;
@property (retain, nonatomic) NSString *m_nsSenderHeadImg;
@property (nonatomic) long long m_lReceiveAmount;
@property (nonatomic) unsigned int m_uiReceiveTime;
@property (retain, nonatomic) NSString *m_nsReceiveTime;
@property (nonatomic) unsigned long long m_enWCRedEnvelopesType;
@property (nonatomic) unsigned long long m_enWCRedEnvelopesKind;
@property (retain, nonatomic) NSString *m_nsReceiverID;
@property (retain, nonatomic) NSString *m_nsSendID;
@property (retain, nonatomic) NSString *m_nsReceiverSuffix;
@property (retain, nonatomic) NSString *m_nsReceiverDesc;

- (void).cxx_destruct;

@end
