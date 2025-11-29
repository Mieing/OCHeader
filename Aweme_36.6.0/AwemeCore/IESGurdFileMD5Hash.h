@interface IESGurdFileMD5Hash : NSObject

+ (id)sha1HashOfFileAtPath:(id)a0;
+ (id)sha512HashOfFileAtPath:(id)a0;
+ (id)md5HashOfFileAtPath:(id)a0 error:(id *)a1;
+ (id)hashOfFileAtPath:(id)a0 withComputationContext:(struct _IESFileMD5HashComputationContext { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; unsigned long long x3; char **x4; } *)a1 error:(id *)a2;

@end
