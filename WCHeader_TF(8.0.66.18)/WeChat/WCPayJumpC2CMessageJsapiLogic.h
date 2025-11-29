@class NSString, JSEvent, WCBaseControlLogic;

@interface WCPayJumpC2CMessageJsapiLogic : WCPayControlLogic <MMTipsViewControllerDelegate, WCBaseControlMgrExt> {
    JSEvent *m_jsEvent;
    NSString *m_bizId;
    unsigned int m_bizType;
    WCBaseControlLogic *m_authLogic;
    NSString *m_username;
    unsigned int m_createTime;
    NSString *m_msgSvrId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 bizId:(id)a1 bizType:(unsigned int)a2 username:(id)a3 createTime:(unsigned int)a4 msgSvrId:(id)a5;
- (void)stopLogic;
- (void)startLogic;
- (void)checkJsapi;
- (BOOL)checkUser;
- (id)locateMessage;
- (id)locateMessageBySvrId;
- (void)reportAndStopLogic;
- (void)jumpToMessage;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)report14954WithString:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)reportWithAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
