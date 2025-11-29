@class NSDictionary;
@protocol WCPayNativeCgiTunnelImplDelegate;

@interface WCPayNativeCgiTunnelImpl : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPayNativeCgiTunnelImplDelegate> logicDelegate;
@property (retain, nonatomic) NSDictionary *paramDict;

- (void)dealloc;
- (id)initWithDelegate:(id)a0 param:(id)a1;
- (void)startLogic;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
