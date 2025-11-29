@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <PBMessageObserverDelegate> {
    unsigned int m_idc_redirect_count;
    unsigned int m_mmtls_set_count;
    unsigned long long m_ui64BeginTime;
    unsigned int m_uiABtest;
    unsigned int m_uiCCType;
}

- (id)initWithData:(id)a0;
- (void)setABTest:(unsigned int)a0 CCType:(unsigned int)a1;
- (void)reportABTestStatus:(unsigned int)a0;
- (void)dealloc;
- (void)startLogic;
- (id)genNewRegRequest;
- (BOOL)regAccount;
- (void)handleNewRegResponse:(id)a0;
- (void)handleNewRegResponseOK:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)pause;
- (void)resume;

@end
