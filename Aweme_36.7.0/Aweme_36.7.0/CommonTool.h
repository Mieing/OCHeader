@interface CommonTool : NSObject

@property BOOL isAppBackground;

+ (BOOL)isFileExist:(id)a0;
+ (id)calculateUrlMd5:(id)a0;
+ (id)createAndStartTimer:(id /* block */)a0 delayTime:(double)a1 timeInterval:(double)a2;
+ (id)getFormatTime:(long long)a0;
+ (BOOL)isDirectoryExist:(id)a0;
+ (id)getSubStringAfterKey:(id)a0 key:(id)a1;
+ (BOOL)createNewFileAtPath:(id)a0 error:(id *)a1;
+ (BOOL)isArrayValid:(id)a0;
+ (BOOL)createDir:(id)a0;
+ (BOOL)copyData:(id)a0 startOffset:(long long)a1 length:(long long)a2 desFile:(id)a3 useMemMax:(long long)a4 error:(id *)a5;
+ (BOOL)checkFileValid:(id)a0 error:(id *)a1;
+ (unsigned long long)calculateCrc32WithFilePath:(id)a0;
+ (id)calculateMd5:(id)a0;
+ (id)writeNSdataToFile:(id)a0 fileName:(id)a1;
+ (void)clearNSDataTempFile:(id)a0;
+ (unsigned long long)calculateRangeCrc32:(id)a0 start:(long long)a1 length:(long long)a2;
+ (id)calculateRangeMd5:(id)a0 start:(long long)a1 length:(long long)a2;
+ (BOOL)isValueValid:(id)a0;
+ (BOOL)isRangeValid:(long long)a0 end:(long long)a1;
+ (BOOL)deleteFile:(id)a0;
+ (id)shareInstance;
+ (int)compareDate:(id)a0 withDate:(id)a1;
+ (void)stopTimer:(id)a0;
+ (BOOL)deleteDirectory:(id)a0;
+ (id)deleteLastCharacter:(id)a0;

- (void)applicationEnterBackground;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)dealloc;

@end
