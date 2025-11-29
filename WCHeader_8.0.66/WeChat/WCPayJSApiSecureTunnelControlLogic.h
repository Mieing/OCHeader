@class JSEvent, NSDictionary;
@protocol SecureTunnelLogicDelegate;

@interface WCPayJSApiSecureTunnelControlLogic : WCPayControlLogic <PBMessageObserverDelegate> {
    NSDictionary *m_param;
}

@property (retain, nonatomic) JSEvent *m_jsEvent;
@property (weak, nonatomic) id<SecureTunnelLogicDelegate> m_delegate;

- (id)initWithJSEvent:(id)a0 delegate:(id)a1 param:(id)a2;
- (void)startLogic;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
