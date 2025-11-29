@interface WAEJLogUtil : NSObject

+ (void)addDelegate:(id)a0;
+ (void)removeDelegate;
+ (void)innerLog:(const char *)a0 line:(int)a1 level:(int)a2 format:(id)a3;
+ (void)systemLog:(const char *)a0 line:(int)a1 format:(id)a2 argList:(char *)a3;
+ (void)systemLog:(const char *)a0 line:(int)a1 format:(id)a2;
+ (void)logGLError:(int)a0 name:(id)a1;

@end
