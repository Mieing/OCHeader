@interface SwiftRegister : SwiftRegisterableBase

+ (BOOL)canEvaluateForModule:(id)a0 key:(id)a1;
+ (void)evaluateForModule:(id)a0 key:(id)a1;
+ (void)evaluateAllFrom:(id)a0;
+ (void)evaluateAllService;
+ (void)evaluateAllJSB;
+ (void)_aweLazyRegisterLoad;

@end
