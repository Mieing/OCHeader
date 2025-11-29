@interface BDDynamicPerformanceUtils : NSObject

+ (id)threadStateDescription:(int)a0;
+ (void)calcQueueNameOffset;
+ (BOOL)getThreadIdInfo:(unsigned long long)a0 Uid:(unsigned long long *)a1 Handle:(unsigned long long *)a2 Qaddr:(unsigned long long *)a3;
+ (BOOL)getDispathQueueName:(unsigned long long)a0 Name:(char *)a1 Max:(unsigned int)a2 Nb:(unsigned int *)a3;
+ (BOOL)isEmptyWithObject:(id)a0;

@end
