@class NSString, WCPayAddressInfo;

@interface WCPayTransferMoneyData : NSObject

@property (copy, nonatomic) NSString *receiverMaskTrueName;
@property (copy, nonatomic) NSString *truenameExtend;
@property (retain, nonatomic) WCPayAddressInfo *m_addressInfo;
@property (retain, nonatomic) NSString *m_addressRemark;
@property (retain, nonatomic) NSString *m_placeorderReserves;
@property (nonatomic) unsigned int desc_has_address;

- (void).cxx_destruct;

@end
