@class NSString;

@interface WCPayTransferPrepayRequestStruct : NSObject

@property (retain, nonatomic) NSString *m_nsReceiverUserName;
@property (nonatomic) unsigned long long m_uiTotalFee;
@property (nonatomic) unsigned int m_uiFeeType;
@property (retain, nonatomic) NSString *m_nsExtInfo;
@property (nonatomic) unsigned int m_uiPayScene;
@property (nonatomic) int m_transferScene;
@property (retain, nonatomic) NSString *m_nsProducetDesc;
@property (retain, nonatomic) NSString *m_nsFacingPaidID;
@property (nonatomic) unsigned int m_uiPayChannel;
@property (retain, nonatomic) NSString *m_nsF2FPayerDesc;
@property (copy, nonatomic) NSString *maskTrueName;
@property (retain, nonatomic) NSString *receiver_openid;
@property (retain, nonatomic) NSString *dynamic_code_url;
@property (retain, nonatomic) NSString *mch_name;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *receiver_true_name;
@property (nonatomic) unsigned int dynamic_code_source;
@property (retain, nonatomic) NSString *cancelOutTradeNo;
@property (nonatomic) unsigned int cancelReason;
@property (nonatomic) unsigned int unpayType;
@property (retain, nonatomic) NSString *truenameExtend;
@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) NSString *checkNameSign;
@property (retain, nonatomic) NSString *placeorderReserves;
@property (retain) NSString *address_name;
@property (retain) NSString *phone_num;
@property (retain) NSString *address;
@property (retain, nonatomic) NSString *groupUsername;
@property (nonatomic) unsigned int desc_has_address;
@property (retain, nonatomic) NSString *placeorderAttach;
@property (nonatomic) unsigned int groupType;
@property (retain, nonatomic) NSString *has_try_hkpay;

- (void).cxx_destruct;

@end
