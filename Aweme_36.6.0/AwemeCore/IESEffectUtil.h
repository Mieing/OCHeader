@interface IESEffectUtil : NSObject

@property (class, nonatomic) BOOL disablePeekResource;

+ (BOOL)isVersionString:(id)a0;
+ (BOOL)isVersion:(id)a0 higherThan:(id)a1;
+ (id)getAlgorithmNamesFromAlgorithmRequirements:(id)a0;
+ (id)algorithmModelNamesWithRequirements:(id)a0;
+ (id)algorithmModelNamesWithRequirement:(id)a0;
+ (BOOL)getShortNameAndVersionWithModelName:(id)a0 shortName:(id *)a1 version:(id *)a2;
+ (BOOL)isVersion:(id)a0 higherOrEqualThan:(id)a1;
+ (BOOL)compareOnlineModel:(id)a0 withBaseRecord:(id)a1;
+ (BOOL)isModelMd5Match:(id)a0 withBaseRecord:(id)a1;
+ (id)mergeRequirements:(id)a0 withModelNames:(id)a1;
+ (id)mergeWithRequirements:(id)a0 modelNames:(id)a1;
+ (void)getModelNameAndVersionWithFullModelName:(id)a0 modelName:(id *)a1 version:(id *)a2;
+ (void)parseModelFilePath:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isEnableDownloadProgressOptimizeWithEffect:(id)a0;

@end
