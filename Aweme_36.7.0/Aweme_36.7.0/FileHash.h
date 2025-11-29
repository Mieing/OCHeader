@interface FileHash : NSObject

+ (id)md5HashOfFileAtPath:(id)a0;
+ (id)hashOfFileAtPath:(id)a0 withComputationContext:(struct _FileHashComputationContext { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; unsigned long long x3; char **x4; } *)a1;
+ (id)sha1HashOfFileAtPath:(id)a0;
+ (id)sha512HashOfFileAtPath:(id)a0;

@end
