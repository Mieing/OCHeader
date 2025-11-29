@class NSString;

@interface HMDCrashRegisterAnalysis : HMDCrashAnalysisBase

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long value;

- (id)postDict;
- (id)initWithReg:(struct hmd_register_analyze_content { unsigned int x0; unsigned int x1; unsigned char x2[8]; unsigned long long x3; unsigned long long x4; } *)a0 description:(const void *)a1 size:(unsigned long long)a2;
- (void).cxx_destruct;

@end
