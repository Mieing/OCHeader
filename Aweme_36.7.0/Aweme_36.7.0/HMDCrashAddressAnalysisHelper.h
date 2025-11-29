@class NSArray, NSData, NSMutableArray;

@interface HMDCrashAddressAnalysisHelper : NSObject {
    NSData *_data;
    const void *_dataBytes;
    unsigned long long _dataLength;
    unsigned long long _consumeLength;
    BOOL _onceConsumeFailed;
    NSMutableArray *_registerInfo;
    NSMutableArray *_stackInfo;
    BOOL _finishProcess;
}

@property (readonly, nonatomic) NSArray *registerInfo;
@property (readonly, nonatomic) NSArray *stackInfo;

+ (id)helperWithPath:(id)a0;

- (BOOL)read:(void *)a0 size:(unsigned long long)a1;
- (BOOL)processRegister:(struct hmd_register_analyze_content { unsigned int x0; unsigned int x1; unsigned char x2[8]; unsigned long long x3; unsigned long long x4; } *)a0;
- (BOOL)processStack:(struct hmd_stack_analyze_content { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;
- (BOOL)getBytes:(const void **)a0 size:(unsigned long long)a1;
- (BOOL)private_read:(void *)a0 size:(unsigned long long)a1;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)process;

@end
