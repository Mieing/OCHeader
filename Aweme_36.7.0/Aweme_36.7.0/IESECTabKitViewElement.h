@interface IESECTabKitViewElement : LynxUI

+ (void)registerTabKitView;

- (void)emitEvent:(id)a0 params:(id)a1;
- (id)customEventNameMap;
- (BOOL)supportCustomEvent:(id)a0;
- (id)createView;

@end
