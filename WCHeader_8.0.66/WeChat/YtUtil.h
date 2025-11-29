@interface YtUtil : NSObject

+ (id)getStringWithDic:(id)a0;
+ (id)SelectDataStr:(id)a0;
+ (id)UpdateSelectDataConfig:(id)a0 withSdcs:(id)a1 withAvcs:(id)a2 withIsUpdateSdcs:(BOOL)a3;
+ (id)YTDict2NSSString:(id)a0;
+ (id)actionSeq2Str:(id)a0;
+ (id)jsonDict2Str:(id)a0 withError:(id)a1;
+ (unsigned long long)nowMs;
+ (unsigned long long)nowUs;
+ (id)encodeBase64:(id)a0;
+ (id)UIImageWithCVMat:(void *)a0;
+ (id)getBase64Image:(id)a0;

@end
