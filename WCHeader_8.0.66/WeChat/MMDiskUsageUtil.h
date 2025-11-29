@interface MMDiskUsageUtil : NSObject

+ (BOOL)isSupportStorageLoadingOptimization;
+ (BOOL)isProgressOptimizationEnabled;
+ (BOOL)useFastList;
+ (BOOL)useFastDelete;
+ (BOOL)cleanOtherUserCache;
+ (BOOL)GetFolderName:(id)a0 andFileName:(id)a1 withPath:(const char *)a2;
+ (BOOL)GetFileStat:(id)a0 fileSize:(unsigned long long *)a1 logicFileSize:(unsigned long long *)a2 accessTime:(long long *)a3 motifyTime:(long long *)a4 changeTime:(long long *)a5 birthTime:(long long *)a6 inode:(unsigned long long *)a7 nlink_t:(unsigned short *)a8;
+ (id)DeleteBizFile:(id)a0;
+ (id)DeleteBizUnknowFile:(id)a0;
+ (id)DeleteBizDir:(id)a0;
+ (id)DeleteBizUnknowDir:(id)a0;
+ (id)moveFileToTmpTrash:(id)a0 description:(id)a1;
+ (id)moveFolderToTmpTrash:(id)a0 description:(id)a1;
+ (int)randomInt;
+ (id)pathOfTrashFile;
+ (id)pathOfTrashFolder;
+ (id)pathOfTrash;
+ (void)recreatePathOfTrash;
+ (BOOL)createDir:(id)a0;
+ (BOOL)pathExist:(id)a0;
+ (BOOL)removePath:(id)a0;
+ (BOOL)movePath:(id)a0 to:(id)a1;
+ (id)decimalStringWithNumber:(id)a0;
+ (id)stringWithSecondsSince1970:(unsigned long long)a0;
+ (unsigned long long)secondsSince1970;
+ (id)LoadDataFromFile:(id)a0 forClass:(Class)a1;
+ (BOOL)SaveDataToFile:(id)a0 withObject:(id)a1 isPrintDescription:(BOOL)a2;
+ (id)GetCurUserNameMD5;
+ (BOOL)RemoveUnneedDiskScanTrash;

@end
