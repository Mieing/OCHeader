@interface WCSearchGroupTrainModel : NSObject

+ (void)initialize;
+ (void)ResetDownloadedModel:(id)a0;
+ (void)ResetGlobalConfig;
+ (BOOL)HasDownloadMainModel;
+ (BOOL)HasDownloadSubModel;
+ (id)DownloadDir;
+ (id)DownloadMainModelPath;
+ (id)DownloadSubModelPath;
+ (id)DefaultMainModelPath;
+ (unsigned int)GetVersion;
+ (id)GetModelPathWithSource:(unsigned int *)a0;
+ (unsigned int)GetVersion:(unsigned int)a0;
+ (void)InitModelConfig;
+ (void)loadModel;
+ (void)forceLoadDefaultModelIfNeeded;
+ (double)safeGetFValue:(id)a0;

- (BOOL)isModelFail;
- (double)scoreByExtMode:(BOOL)a0 outLeafNodeKeys:(id)a1 features:(id)a2;
- (id)getMaxSearchGroupFeature;

@end
