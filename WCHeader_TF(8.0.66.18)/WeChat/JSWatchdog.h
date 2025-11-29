@interface JSWatchdog : NSObject

+ (void)setupWithTime:(double)a0 strip:(BOOL)a1 callback:(void /* function */ *)a2;
+ (void)hook4Watchdog;
+ (void)setupWithCallback:(void /* function */ *)a0;
+ (BOOL)isEnable;
+ (id)nameForVM:(struct OpaqueJSContextGroup { } *)a0;
+ (void)setName:(id)a0 forVM:(struct OpaqueJSContextGroup { } *)a1;
+ (void)hook;

@end
