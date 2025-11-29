@interface AliSecXLocalStorage : NSObject

+ (BOOL)removeFile:(id)a0 error:(id *)a1;
+ (BOOL)isFileExist:(id)a0;
+ (id)loadStringFromKeychain:(id)a0 error:(id *)a1;
+ (BOOL)saveStringToKeychain:(id)a0 Value:(id)a1 error:(id *)a2;
+ (BOOL)deleteItemFromKeychain:(id)a0 error:(id *)a1;
+ (BOOL)deleteItemFromKeychain:(id)a0 service:(id)a1;
+ (id)loadStringFromKeychain:(id)a0;
+ (id)loadStringFromKeychain:(id)a0 service:(id)a1;
+ (long long)saveStringToKeychain:(id)a0 Value:(id)a1;
+ (BOOL)deleteItemFromKeychain:(id)a0;
+ (id)loadDataFromKeychain:(id)a0;
+ (long long)saveDataToKeychain:(id)a0 Value:(id)a1;
+ (id)loadDataFromFile:(id)a0 fromFolder:(long long)a1 withPath:(id)a2;
+ (long long)saveDataToFile:(id)a0 Value:(id)a1 fromFolder:(long long)a2 withPath:(id)a3;
+ (BOOL)isFileExist:(id)a0 fromFolder:(long long)a1 withPath:(id)a2;
+ (BOOL)createFile:(id)a0 fromFolder:(long long)a1 withPath:(id)a2 error:(id *)a3;
+ (id)getDocumentsFolderFileListFromFolder:(long long)a0 withPath:(id)a1 error:(id *)a2;
+ (unsigned long long)getFileSize:(id)a0 fromFolder:(long long)a1 withPath:(id)a2 error:(id *)a3;
+ (BOOL)removeFile:(id)a0 fromFolder:(long long)a1 withPath:(id)a2 error:(id *)a3;
+ (id)getFirstLevelFolderPath:(long long)a0;
+ (BOOL)createFile:(id)a0;
+ (unsigned long long)getFileSize:(id)a0 error:(id *)a1;

@end
