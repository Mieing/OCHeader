@class NSString, BusiF2FSucPageResp, BusiF2FActQryResp, BusiF2FPlaceOrderReq, CgiF2FDynamicCodeResp, WCPayTranferGetUserNameResponse, BusiF2FPayOkResp, BusiF2FPlaceOrderResp;

@interface WCPayBizF2FControlData : NSObject

@property (nonatomic) unsigned int busiType;
@property (retain, nonatomic) NSString *upperWording;
@property (retain, nonatomic) NSString *mchName;
@property (retain, nonatomic) NSString *mchPhoto;
@property (retain, nonatomic) NSString *rcvr_ticket;
@property (nonatomic) unsigned int get_pay_wifi;
@property (retain, nonatomic) NSString *mch_type;
@property (nonatomic) unsigned int mch_time;
@property (retain, nonatomic) NSString *receiver_openid;
@property (nonatomic) unsigned int qrcode_level;
@property (retain, nonatomic) NSString *receiverDisplayName;
@property (retain, nonatomic) NSString *receiverHeadImageUrl;
@property (nonatomic) unsigned int payAmountInCent;
@property (retain, nonatomic) NSString *payerComment;
@property (retain, nonatomic) BusiF2FPlaceOrderResp *placeOrderResp;
@property (retain, nonatomic) BusiF2FPayOkResp *payOkResp;
@property (retain, nonatomic) BusiF2FActQryResp *actQryResp;
@property (retain, nonatomic) WCPayTranferGetUserNameResponse *transferScanQrCodeResp;
@property (retain, nonatomic) BusiF2FPlaceOrderReq *m_placeOrderReq;
@property (retain, nonatomic) BusiF2FSucPageResp *m_bizSucPageResp;
@property (retain, nonatomic) CgiF2FDynamicCodeResp *m_f2fDynamicCodeResp;

- (BOOL)isBusinessF2FReceive;
- (void).cxx_destruct;

@end
