@interface HMDCrashStackAnalysis : HMDCrashAnalysisBase

@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned long long value;

- (id)initWithStack:(struct hmd_stack_analyze_content { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0 description:(const void *)a1 size:(unsigned long long)a2;
- (id)postDict;

@end
