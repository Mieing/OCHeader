@class NSString;

@interface WCRedEnvelopesReceiverInfo : NSObject

@property (retain, nonatomic) NSString *m_nsReceiveId;
@property (nonatomic) BOOL m_bIsMySelf;
@property (retain, nonatomic) NSString *m_nsReceiverUserName;
@property (retain, nonatomic) NSString *m_nsReceiverName;
@property (retain, nonatomic) NSString *m_nsReceiverHeadImg;
@property (nonatomic) long long m_lReceiveAmount;
@property (nonatomic) unsigned int m_uiReceiveTime;
@property (retain, nonatomic) NSString *m_nsWishing;
@property (retain, nonatomic) NSString *m_nsReceiverGameTips;
@property (retain, nonatomic) NSString *m_nsReceiveAmountDesc;
@property (retain, nonatomic) NSString *m_nsSendNameSuffix;

- (void).cxx_destruct;

@end
