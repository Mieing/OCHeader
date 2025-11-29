@class JSEvent, NSDictionary, NSString;
@protocol WCPayJumpPayCardListLogicDelegate;

@interface WCPayJumpPayCardListLogic : WCPayControlLogic <WCPayCardListViewControllerDelegate, MMUseCaseCallback>

@property (retain, nonatomic) JSEvent *m_jsEvent;
@property (weak, nonatomic) id<WCPayJumpPayCardListLogicDelegate> m_delegate;
@property (retain, nonatomic) NSDictionary *m_param;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithJSEvent:(id)a0 delegate:(id)a1 param:(id)a2;
- (void)stopLogic;
- (void)startLogic;
- (void)OnCheckWCPayJsApiRequest:(id)a0 Error:(id)a1;
- (void)call:(id)a0;
- (void)onWCPayCardListViewControllerBack;
- (void)onWCPayCardListViewControllerWillBack;
- (void).cxx_destruct;

@end
