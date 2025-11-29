@interface BDLynxBridgeListenerManager : NSObject

+ (void)addBridgeListener:(id)a0;
+ (void)notifyWillCallback:(id)a0 message:(id)a1;
+ (void)notifyDidCallback:(id)a0 message:(id)a1;
+ (void)notifyWillCallEvent:(id)a0 message:(id)a1;
+ (void)notifyDidCallEvent:(id)a0 message:(id)a1;
+ (void)notifyDidHandleMethod:(id)a0 message:(id)a1;
+ (void)notifyWillHandleMethod:(id)a0 message:(id)a1;
+ (id)bridgeListeners;
+ (void)callBridgeListenersWithSel:(SEL)a0 bridge:(id)a1 message:(id)a2;

@end
