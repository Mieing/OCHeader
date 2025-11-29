@class NSString, WAJSEventHandler_BaseEvent, NSDictionary, JSEvent, KindaJSEvent;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayVerifyUserIdentityControlLogic : WCPayControlLogic <WCBaseControlMgrExt, MMUseCaseCallback> {
    JSEvent *m_jsEvent;
}

@property (retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent;
@property (retain, nonatomic) KindaJSEvent *kindaJSEvent;
@property (retain, nonatomic) NSDictionary *paramDict;
@property (weak, nonatomic) id<WCPayPayJSApiLogicParamDelegate> paramDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 tinyAppEvent:(id)a1 params:(id)a2;
- (void)dealloc;
- (void)stopForceRotationToPortrait;
- (void)startForceRotationToPortrait;
- (void)call:(id)a0;
- (void)startLogic;
- (void)stopLogic;
- (void).cxx_destruct;

@end
