@class HMDExceptionTypeInfo, NSArray;

@interface HMDExceptionRange : NSObject

@property (nonatomic) unsigned long long headerAddress;
@property (nonatomic) unsigned long long functionOffset;
@property (nonatomic) unsigned long long nextFunctionOffset;
@property (nonatomic) unsigned long long callSiteStart;
@property (nonatomic) unsigned long long callSiteLength;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HMDExceptionTypeInfo *typeInfo;
@property (retain, nonatomic) NSArray *specExcluded;
@property (readonly, nonatomic) unsigned long long functionAddress;
@property (readonly, nonatomic) unsigned long long nextFunctionAddress;

- (unsigned long long)functionAddress;
- (unsigned long long)nextFunctionAddress;
- (id)initWithFrameInfo:(struct HMDFrameInfo { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; void *x5; BOOL x6; unsigned int x7; void *x8; unsigned long long x9; unsigned int x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; unsigned long long x21; unsigned long long x22; unsigned int x23; unsigned int x24; unsigned int x25; } *)a0 landingSpecificData:(struct HMDLandingSpecificData { BOOL x0; unsigned int x1; struct { void *x0; char *x1; void *x2; void *x3; } x2; struct { long long x0; char *x1; unsigned char x2; } x3; unsigned long long x4; void *x5; void *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; unsigned long long x11; BOOL x12; unsigned long long x13; char *x14; } *)a1;
- (void).cxx_destruct;

@end
