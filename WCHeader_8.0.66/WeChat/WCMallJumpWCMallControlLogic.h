@class NSString, JSEvent, WCMallMobileChargeControlLogic;

@interface WCMallJumpWCMallControlLogic : WCMallControlLogic <IWCMallControlLogicExt, WCBaseControlMgrExt> {
    JSEvent *m_jsEvent;
    NSString *m_nsStepUrl;
    WCMallMobileChargeControlLogic *m_oWCMallFunctionActivityPayControlLogic;
    NSString *m_nsAppID;
    NSString *m_nsFuncID;
    BOOL m_bEndFlag;
    BOOL m_bJSEventEnd;
    int m_enWCMallJumpWCMallControlLogicScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 URL:(id)a1;
- (id)initWithScene:(int)a0;
- (void)startLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)endJSEventWith:(BOOL)a0;
- (void)stopLogic;
- (void)OnGetWCMallFunctionList:(id)a0 GlobalList:(id)a1 BroadCastInfo:(id)a2 BannerList:(id)a3 response:(id)a4 FromCached:(BOOL)a5 NotShowTutorial:(BOOL)a6 typeMap:(id)a7 Error:(id)a8;
- (void).cxx_destruct;

@end
