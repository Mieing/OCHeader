@class NSString, JSEvent;

@interface WCPaySendC2CMessageJSApiLogicControl : WCPayControlLogic <SessionSelectControllerDelegate> {
    JSEvent *m_jsEvent;
    NSString *m_setInUrl;
}

@property (retain, nonatomic) NSString *m_toUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 SetInUrl:(id)a1;
- (void)startLogic;
- (void)stopLogic;
- (BOOL)OnDoCheckWCPayJsApi;
- (BOOL)OnDoSendC2CSecureMessage;
- (BOOL)PickUserToSendSecureMessage;
- (BOOL)DoSendC2CSecureMessageTo:(id)a0;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)OnSendC2CSecureMessageResponseStatus:(id)a0 Error:(id)a1;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (void).cxx_destruct;

@end
