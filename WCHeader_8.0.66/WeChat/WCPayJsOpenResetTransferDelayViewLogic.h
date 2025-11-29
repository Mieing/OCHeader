@class WCPayGetTransferWordingCgi, GetTransferWordingResponse, NSString;

@interface WCPayJsOpenResetTransferDelayViewLogic : WCPayControlLogic <WCPayGetTransferWordingCgiDelegate>

@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) WCPayGetTransferWordingCgi *wordingCgi;
@property (retain, nonatomic) GetTransferWordingResponse *wordingResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFromScene:(unsigned long long)a0;
- (void)startLogic;
- (void)onDelayTransferDurationViewControllerBack;
- (void)wcpayGetTransferWordingCgi:(id)a0 didGetResponse:(id)a1;
- (void)wcpayGetTransferWordingCgi:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;

@end
