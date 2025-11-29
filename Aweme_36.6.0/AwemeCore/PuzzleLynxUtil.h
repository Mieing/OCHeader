@interface PuzzleLynxUtil : NSObject

+ (void)registerCanvasViewForLynxView:(id)a0;
+ (void)setUpBridgeWithLynxView:(id)a0;
+ (void)setUpBridgeWithKitView:(id)a0 lynxView:(id)a1 onlyUseStandardMethods:(BOOL)a2;
+ (void)registerCustomView:(id)a0 forLynxView:(id)a1;
+ (void)registerCustomShadowNode:(id)a0 forLynxView:(id)a1;
+ (unsigned long long)latchTypeWithParams:(id)a0;

@end
