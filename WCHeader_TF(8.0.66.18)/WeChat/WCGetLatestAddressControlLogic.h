@class WCAddressAuthenticationSturct, NSString, WCAddressBaseAddress, JSEvent;

@interface WCGetLatestAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt> {
    JSEvent *m_jsEvent;
    WCAddressAuthenticationSturct *m_oWCAddressAuthenticationSturct;
    WCAddressBaseAddress *m_oWCAddressBaseAddress;
    NSString *m_nsAppUserName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 AuthenticationInfo:(id)a1;
- (void)handleGetLatestAddress;
- (void)startLogic;
- (void)stopLogic;
- (void)OnGetLatestAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnAcceptGetLatestAddress;
- (void)OnNotAcceptGetLatestAddress;
- (void).cxx_destruct;

@end
