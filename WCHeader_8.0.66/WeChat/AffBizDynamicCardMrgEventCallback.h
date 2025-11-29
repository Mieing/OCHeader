@interface AffBizDynamicCardMrgEventCallback : NSObject {
    struct AffBizDynamicCardMrgEventDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffBizDynamicCardMrgEventDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffBizDynamicCardMrgEventDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffBizDynamicCardMrgEventDispatcherCallback *x1; id x2; } *)a0;
- (void)onCallOnAdServerInfoComplete:(int)a0;
- (void)onCallOnRecFeedsAdServerInfoComplete:(int)a0;
- (void)onCallOnDynamicCardInfoComplete:(int)a0;

@end
