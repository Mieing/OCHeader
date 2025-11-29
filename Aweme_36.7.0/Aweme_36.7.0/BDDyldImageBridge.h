@interface BDDyldImageBridge : NSObject

+ (BOOL)dyldImageBridgeWrite:(const char *)a0;
+ (id)dyldImageBridgeRead:(const char *)a0;

@end
