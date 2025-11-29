@interface AliSecXFileOp : NSObject

+ (BOOL)isFileExistAtPath:(id)a0;
+ (BOOL)removeFile:(id)a0 error:(id *)a1;
+ (BOOL)isFileExist:(id)a0;
+ (id)getDocumentsPath;
+ (id)getLibraryPath;
+ (id)getFullPathWithFolderPath:(id)a0 subPath:(id)a1 name:(id)a2;
+ (id)readFileAtPath:(id)a0;
+ (BOOL)createFileAtPath:(id)a0 name:(id)a1 error:(id *)a2;
+ (BOOL)writeToFileAtPath:(id)a0 WithContent:(id)a1;
+ (id)getDocumentsFileListAtPath:(id)a0 error:(id *)a1;
+ (unsigned long long)getFileSizeAtPath:(id)a0 error:(id *)a1;
+ (BOOL)createFile:(id)a0;
+ (BOOL)removeFileAtPath:(id)a0 error:(id *)a1;
+ (unsigned long long)getFileSize:(id)a0 error:(id *)a1;

@end
