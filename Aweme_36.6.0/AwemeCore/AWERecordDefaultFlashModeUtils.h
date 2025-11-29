@interface AWERecordDefaultFlashModeUtils : NSObject

+ (unsigned long long)p_convertFlashModeToTorchMode:(unsigned long long)a0;
+ (unsigned long long)p_convertTorchModeToFlashMode:(unsigned long long)a0;
+ (unsigned long long)flashMode;
+ (void)setTorchMode:(unsigned long long)a0;
+ (void)setFlashMode:(unsigned long long)a0;
+ (unsigned long long)torchMode;

@end
