@interface TIMXMemoryProfiler : NSObject

+ (unsigned long long)calculateMemorySizeOfObject:(id)a0;
+ (id)analyzeMemoryForObject:(id)a0;
+ (void)printMemoryAnalysisForObject:(id)a0;
+ (void)analyzeConversationMemory:(id)a0;
+ (unsigned long long)totalConversationMemorySize:(id)a0;

@end
