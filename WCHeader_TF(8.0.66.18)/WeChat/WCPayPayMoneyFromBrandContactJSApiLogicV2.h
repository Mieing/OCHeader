@class NSString, WAJSEventHandler_BaseEvent, JSEvent, KindaJSEvent;
@protocol WCPayPayJSApiLogicParamDelegate;

@interface WCPayPayMoneyFromBrandContactJSApiLogicV2 : WCPayControlLogic <WCBaseControlMgrExt, MMUseCaseCallback> {
    JSEvent *m_jsEvent;
    NSString *m_stepInURL;
    NSString *m_stepAppUserName;
}

@property (retain, nonatomic) WAJSEventHandler_BaseEvent *tinyAppEvent;
@property (retain, nonatomic) KindaJSEvent *kindaJSEvent;
@property (nonatomic) int chatType;
@property (nonatomic) int chatSenderType;
@property (nonatomic) int qrcodeSessionType;
@property (retain, nonatomic) NSString *qrcodeSessionName;
@property (retain, nonatomic) NSString *qrcodeTimelineObjId;
@property (nonatomic) int codeScene;
@property (retain, nonatomic) NSString *qrcodeSenderMsgId;
@property (retain, nonatomic) NSString *qrcodeSenderName;
@property (weak, nonatomic) id<WCPayPayJSApiLogicParamDelegate> paramDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSEvent:(id)a0 tinyAppEvent:(id)a1 URL:(id)a2 BrandUserName:(id)a3;
- (void)setExtraInfo:(id)a0;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)a0;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
