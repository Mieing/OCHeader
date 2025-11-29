@interface CommonAffContextObjcStatic : NSObject

+ (id)currentContext;
+ (id)fastCurrentContext;
+ (id)activeUserContext;
+ (void)push:(id)a0;
+ (void)pop:(id)a0;
+ (id)getAffServiceCenter:(BOOL)a0;

@end
