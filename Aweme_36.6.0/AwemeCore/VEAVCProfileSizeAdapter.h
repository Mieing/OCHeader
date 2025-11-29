@interface VEAVCProfileSizeAdapter : NSObject

+ (id)adjustProfile:(id)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isLevel30SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel31SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel41SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel32SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel40SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (struct __CFString { } *)transFromProfile:(id)a0;
+ (BOOL)isLevel42SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel50SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (BOOL)isLevel51SupportedWithMaxSize:(long long)a0 minSize:(long long)a1;
+ (struct __CFString { } *)adjustCFProfile:(struct __CFString { } *)a0 withTargetSize:(struct CGSize { double x0; double x1; })a1;

@end
