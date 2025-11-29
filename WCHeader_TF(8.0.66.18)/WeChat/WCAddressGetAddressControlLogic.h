@class NSString, WCAddressControlData, WCAddressControlLogic;

@interface WCAddressGetAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCBaseControlMgrExt> {
    WCAddressControlData *m_data;
    WCAddressControlLogic *m_oWCAddressControlLogic;
    int m_eWCAddressGetAddressControlLogicSituation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (id)initWithData:(id)a0 Situation:(int)a1;
- (void)EndWCAddressGetAddressControlLogic;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)OnGetLatestAddress:(id)a0 UserName:(id)a1 NickName:(id)a2 Error:(id)a3;
- (void)OnPreFinishedWCAddressLogic:(id)a0 waitUntilDone:(BOOL *)a1;
- (void).cxx_destruct;

@end
