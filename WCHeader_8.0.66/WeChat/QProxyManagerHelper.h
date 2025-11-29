@interface QProxyManagerHelper : NSObject

+ (void)initialize;
+ (int)subResourceTypeForRequest:(id)a0;
+ (long long)commonDirectTypeWithRequest:(id)a0 mainResource:(BOOL)a1;
+ (BOOL)isInDirectListWithRequest:(id)a0;
+ (void)removeCustomReqHeaders:(id)a0;

@end
