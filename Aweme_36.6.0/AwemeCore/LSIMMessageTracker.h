@interface LSIMMessageTracker : NSObject

+ (void)trackMessageChainWithEvent:(id)a0 conversation:(id)a1 message:(id)a2 params:(id)a3;
+ (void)trackMessageChainWithEvent:(id)a0 conversation:(id)a1 message:(id)a2 params:(id)a3 extra:(id)a4;
+ (void)trackMessageChainWithEvent:(id)a0 conversation:(id)a1 message:(id)a2;

@end
