@interface HMDExceptionTypeInfo : NSObject

@property (nonatomic) void *type_info;
@property (nonatomic) const char *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL objcCatchID;
@property (retain, nonatomic) Class objcClass;

+ (id)typeInfoWithCatchNativeLSDA:(struct HMDLandingSpecificData { BOOL x0; unsigned int x1; struct { void *x0; char *x1; void *x2; void *x3; } x2; struct { long long x0; char *x1; unsigned char x2; } x3; unsigned long long x4; void *x5; void *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; unsigned long long x11; BOOL x12; unsigned long long x13; char *x14; } *)a0;
+ (id)typeInfosWithSpecificationLSDA:(struct HMDLandingSpecificData { BOOL x0; unsigned int x1; struct { void *x0; char *x1; void *x2; void *x3; } x2; struct { long long x0; char *x1; unsigned char x2; } x3; unsigned long long x4; void *x5; void *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; unsigned long long x11; BOOL x12; unsigned long long x13; char *x14; } *)a0;

- (void).cxx_destruct;

@end
