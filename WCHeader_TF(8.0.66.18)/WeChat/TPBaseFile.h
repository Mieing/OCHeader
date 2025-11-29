@class NSString, NSFileHandle;

@interface TPBaseFile : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSString *filePath;
@property (nonatomic) BOOL fileOpen;
@property (nonatomic) BOOL forUpdating;

+ (BOOL)fileExist:(id)a0;
+ (long long)getFileSize:(id)a0;
+ (id)loadDataFromPathEx:(id)a0 Offset:(unsigned long long)a1 MaxLen:(unsigned long long)a2;
+ (BOOL)createPath:(id)a0;
+ (BOOL)createFile:(id)a0;
+ (BOOL)copyFile:(id)a0 To:(id)a1;
+ (void)ensureCreateParentDir:(id)a0;
+ (BOOL)removeFile:(id)a0;
+ (BOOL)appendData:(id)a0 toPath:(id)a1;
+ (BOOL)writeDataToPath:(id)a0 Offset:(long long)a1 Data:(id)a2;

- (void)close;
- (BOOL)readData:(id)a0 Len:(unsigned long long)a1;
- (BOOL)setFileInfo:(id)a0 forUpdating:(BOOL)a1;
- (BOOL)isOpen;
- (BOOL)seek:(long long)a0;
- (BOOL)open;
- (unsigned long long)seekToEndOfFile;
- (BOOL)writeData:(id)a0;
- (BOOL)writeLargeData:(id)a0;
- (void).cxx_destruct;

@end
