@interface WebStorageUtil : MMObject

+ (id)getWebStoragePath:(BOOL)a0;
+ (id)getWebStorageDbDirPath;
+ (id)getDbPath;
+ (id)getWebStorageDataDirPath:(BOOL)a0;
+ (id)getWebStorageDataDirPathForAppId:(id)a0 CreatePathIfNotExist:(BOOL)a1;
+ (id)getWebStorageDataPath:(id)a0 FileName:(id)a1 CreatePathIfNotExist:(BOOL)a2;
+ (id)getFileName:(id)a0;
+ (id)getMD5:(id)a0;

@end
