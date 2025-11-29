@class WCPayTranferGetUserNameResponse, WCPayTransferPrepayResponseStruct, CgiF2FDynamicCodeResp;

@interface WCPayF2FControlData : NSObject

@property (retain, nonatomic) WCPayTranferGetUserNameResponse *m_transferScanQrCodeResp;
@property (retain, nonatomic) WCPayTransferPrepayResponseStruct *m_f2fPlaceOrderResp;
@property (retain, nonatomic) CgiF2FDynamicCodeResp *m_f2fDynamicCodeResp;

- (void).cxx_destruct;

@end
