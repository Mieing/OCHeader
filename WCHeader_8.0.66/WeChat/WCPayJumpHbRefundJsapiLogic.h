@class WCPayHongBaoRefundConfigCgi, NSString, JSEvent, GetHbRefundConfigResp;

@interface WCPayJumpHbRefundJsapiLogic : WCPayControlLogic <WCPayHongBaoRefundConfigCgiDelegate> {
    JSEvent *m_jsEvent;
}

@property (retain, nonatomic) WCPayHongBaoRefundConfigCgi *hbRefundConfigCgi;
@property (retain, nonatomic) GetHbRefundConfigResp *hbRefundConfigResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0;
- (void)stopLogic;
- (void)startLogic;
- (void)requestHbRefundConfig;
- (void)onChangeHongBaoRefundPayWay;
- (void)OnHongBaoRefundConfigRepsonseOK:(id)a0;
- (void)OnHongBaoRefundConfigRepsonseError:(id)a0 errorCode:(unsigned int)a1;
- (void).cxx_destruct;

@end
