@interface DynamicOutputFreqCtrlStrategy : NSObject

+ (double)calcOutputFreqWithCurrentCache:(unsigned long long)a0;
+ (unsigned long long)calcOutputLineLimitWithCurrentCache:(unsigned long long)a0;

@end
