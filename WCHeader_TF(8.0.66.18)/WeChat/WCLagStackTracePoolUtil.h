@interface WCLagStackTracePoolUtil : NSObject

+ (id)makeCallTreeWithStackCyclePool:(unsigned long long **)a0 stackCount:(unsigned long long *)a1 maxStackTraceCount:(unsigned long long)a2;

@end
