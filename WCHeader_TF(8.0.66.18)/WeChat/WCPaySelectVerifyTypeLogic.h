@class NSString, WCPayRealnameRouteCgi, MMVoidCallback;

@interface WCPaySelectVerifyTypeLogic : WCPayControlLogic <WCPayRealnameVerifyLogicDelegate, WCPaySelectVerifyTypeViewControllerDelegate, IWCPayControlLogicExt>

@property BOOL hasStartAddCard;
@property (retain, nonatomic) WCPayRealnameRouteCgi *realnameRouteCgi;
@property (nonatomic) long long scene;
@property (retain) NSString *sessionId;
@property (retain, nonatomic) MMVoidCallback *successCallback;
@property (retain, nonatomic) MMVoidCallback *cancelCallback;
@property (nonatomic) int fromScene;
@property (nonatomic) int payScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (void)startLogic;
- (void)openLiteAppFromRealname:(id)a0;
- (void)OnSelectBindCard;
- (id)onWCPaySelectVerifyTypeViewControllerSessionId;
- (void)OnSelectRealnameVerify:(id)a0;
- (void)OnSelectBindCardVerify;
- (void)OnBack;
- (void)DirectBindCard;
- (void)realnameVerifyLogicDidFinishWithTinyAppUri:(id)a0;
- (void)OnFinishedWCPayLogic:(id)a0 CompleteStatus:(int)a1;
- (void)OnRealnameVerfitySuccessNotification:(id)a0;
- (void).cxx_destruct;

@end
