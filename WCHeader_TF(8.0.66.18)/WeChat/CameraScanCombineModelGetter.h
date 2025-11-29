@interface CameraScanCombineModelGetter : NSObject

+ (unsigned int)ffeSdkVersion;
+ (id)pathOfModelTmpDir;
+ (id)pathOfModelTmpFolderDir;
+ (id)pathOfModelTmpConfigFile;
+ (id)pathOfModelRootDir;
+ (id)pathOfModelDirWithResVer:(long long)a0;
+ (id)pathOfModelConfigFileWithResVer:(long long)a0;
+ (id)resourceNameWithoutFileExt:(id)a0;

- (id)fetchBundleModelInfo;
- (id)fetchMMResModelInfoWithResVersion:(long long)a0;
- (id)readLocalModelConfigForXNet;
- (id)fetchXNetModelInfoFromWeVision;
- (BOOL)isModelInfoValid:(id)a0;
- (BOOL)tryCreateMMResModelInfo:(id)a0 version:(unsigned int)a1;
- (void)clearLowerVersionResFileWithResVer:(long long)a0;
- (id)genFileIndexFromConfig:(id)a0;
- (BOOL)checkModelFileValid:(id)a0 fileIndex:(id)a1;

@end
