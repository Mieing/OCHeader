@interface QBFileUtils : NSObject

+ (BOOL)disableFileBackup:(id)a0;
+ (id)libPath;
+ (id)rootPath;
+ (BOOL)checkRootPathExist;
+ (BOOL)saveData:(id)a0 withFileName:(id)a1;
+ (void)saveData:(id)a0 withFileName:(id)a1 completion:(id /* block */)a2;
+ (id)getDataWithFileName:(id)a0;
+ (BOOL)deleteFileWithName:(id)a0;
+ (id)fileNameWithPrefix:(id)a0 subfix:(id)a1;
+ (void)setCommonFileDirectory:(id)a0;
+ (id)commonFilePathWithName:(id)a0;

@end
