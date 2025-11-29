@interface QBProtocolCallback : NSObject

+ (void)initialize;
+ (id)callbackFromRequest:(id)a0;
+ (void)removeCallbackFromRequest:(id)a0;

- (void)registerSelfForRequest:(id)a0;

@end
