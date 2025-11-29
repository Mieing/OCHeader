@class NSDictionary;
@protocol WCPayJSApiNativeCgiTunnelLogicDelegate;

@interface WCPayJSApiNativeCgiTunnelLogic : WCPayControlLogic <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayJSApiNativeCgiTunnelLogicDelegate> logicDelegate;
@property (retain, nonatomic) NSDictionary *paramDict;

- (id)initLogicWithDelegate:(id)a0 jsEvent:(id)a1 param:(id)a2;
- (void)dealloc;
- (void)pause;
- (void)startLogic;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
