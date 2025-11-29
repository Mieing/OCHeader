@interface WePkgPathUtil : MMObject

+ (id)wePkgLibPath;
+ (id)wePkgDataDirPath;
+ (id)liteAppFileDir:(id)a0;
+ (id)wePkgDatabasePath;
+ (id)directoryPathOfPkgId:(id)a0;
+ (id)directoryPathOfPkgId:(id)a0 version:(id)a1;
+ (id)debugDirectoryPathOfPkgId:(id)a0;
+ (id)bigPkgFilePathOfPkgId:(id)a0 version:(id)a1;
+ (id)pathOfPkgFile:(id)a0 version:(id)a1 FileName:(id)a2;
+ (id)getVersionListWithSamePkgId:(id)a0;
+ (id)getFilePathIfExisted:(id)a0 FileName:(id)a1 ExpectMd5:(id)a2 ExpectFileSize:(unsigned int)a3;
+ (id)wePkgHarRecordFileDir;
+ (id)wePkgHarInterceptFileDir;

@end
