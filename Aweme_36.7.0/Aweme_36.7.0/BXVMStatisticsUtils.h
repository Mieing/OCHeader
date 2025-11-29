@interface BXVMStatisticsUtils : NSObject

+ (unsigned long long)total_memory;
+ (long long)getAvailableMem;
+ (unsigned long long)current_jetsam_memory_limite;
+ (unsigned long long)apple_jetsam_memory_limite:(const char *)a0;
+ (double)getMemUsage;
+ (long long)getProcessVirtualMemorySize;
+ (long long)getMemorySize;

@end
