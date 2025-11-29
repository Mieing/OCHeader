@interface LynxTraceEvent : NSObject

+ (void)beginSection:(id)a0 withName:(id)a1;
+ (void)endSection:(id)a0;
+ (void)instant:(id)a0 withName:(id)a1;
+ (void)endSection:(id)a0 withName:(id)a1;
+ (void)endSection:(id)a0 withName:(id)a1 debugInfo:(id)a2;
+ (id)getRandomColor;
+ (void)instant:(id)a0 withName:(id)a1 withColor:(id)a2;
+ (void)instant:(id)a0 withName:(id)a1 debugInfo:(id)a2;
+ (void)beginSection:(id)a0 withName:(id)a1 debugInfo:(id)a2;
+ (void)counter:(id)a0 withName:(id)a1 withCounterValue:(unsigned long long)a2;
+ (BOOL)categoryEnabled:(id)a0;
+ (void)instant:(id)a0 withName:(id)a1 withTimestamp:(long long)a2;
+ (void)instant:(id)a0 withName:(id)a1 withTimestamp:(long long)a2 withColor:(id)a3;
+ (void)instant:(id)a0 withName:(id)a1 withTimestamp:(long long)a2 debugInfo:(id)a3;
+ (BOOL)registerTraceBackend:(long long)a0;

@end
