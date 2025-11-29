@class NSString, NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface AMapLogFileManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileOperateQueue;
@property (readonly, copy, nonatomic) NSString *logsDirectory;

+ (id)shareFileManager;

- (id)getContentOfDirectoryAtPath:(id)a0 relativePath:(id)a1 error:(id *)a2;
- (BOOL)deleteItemWithPath:(id)a0;
- (BOOL)directoryIsExist:(id)a0 relativePath:(id)a1;
- (id)getContentOfDirectoryAtPath:(id)a0 error:(id *)a1;
- (id)initWithLogsDirectory:(id)a0;
- (BOOL)creatLogDirectory:(id)a0 relativePath:(id)a1 error:(id *)a2;
- (BOOL)fileIsExist:(id)a0 relativePath:(id)a1;
- (BOOL)directoryIsExist:(id)a0;
- (unsigned long long)fileSizeAtPath:(id)a0 error:(id *)a1;
- (BOOL)fileIsExist:(id)a0;
- (BOOL)fileIsExistAtPath:(id)a0;
- (BOOL)creatLogDirectory:(id)a0 error:(id *)a1;
- (id)getContentOfDirectoryAtAbsolutePath:(id)a0 error:(id *)a1;
- (void)tryResetFileProtection:(id)a0;
- (BOOL)creatFileWithAbsolutePath:(id)a0;
- (id)attributesOfItemAtPath:(id)a0;
- (void)getDirectoriesWithComponentName:(id)a0 complete:(id /* block */)a1;
- (void)getFilePathsWithComponentName:(id)a0 levelStr:(id)a1 complete:(id /* block */)a2;
- (unsigned long long)directorySizeAtPath:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
