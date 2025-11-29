@interface GXFileHandler : NSObject

+ (BOOL)isFileExistAtPath:(id)a0;
+ (id)pathForCachesDirectory;
+ (id)pathForLibraryDirectory;
+ (id)pathForDocumentsDirectory;
+ (id)pathForApplicationSupportDirectory;
+ (id)pathForCachesDirectoryWithPath:(id)a0;
+ (id)pathForLibraryDirectoryWithPath:(id)a0;
+ (id)pathForDocumentsDirectoryWithPath:(id)a0;
+ (id)pathForApplicationSupportDirectoryWithPath:(id)a0;
+ (BOOL)isDirectoryItemAtPath:(id)a0;
+ (id)creatTimeForItemAtPath:(id)a0;

@end
