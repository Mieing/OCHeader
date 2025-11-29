@interface TingObjcStartUpKitCpp : NSObject

+ (void)start:(id)a0;
+ (BOOL)hasStart;
+ (long long)startTime;
+ (void)requireMark:(id)a0;
+ (void)mark:(id)a0;
+ (void)markWithExtra:(id)a0 extras:(id)a1;
+ (id)getMarkExtra:(id)a0;
+ (void)end;

@end
