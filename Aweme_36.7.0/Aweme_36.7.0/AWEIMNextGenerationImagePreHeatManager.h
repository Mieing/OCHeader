@interface AWEIMNextGenerationImagePreHeatManager : NSObject

+ (void)startPreHeat;
+ (BOOL)isSupportPicUploadPreHeat;
+ (long long)maxPreHeatCount;
+ (long long)preHeatCount;
+ (id)preHeatConfigDic;
+ (void)stopPreHeat;

@end
