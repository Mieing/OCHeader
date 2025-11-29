@class NSString, NSRecursiveLock;

@interface MBFileStorageInfo : NSObject

@property (retain, nonatomic) NSString *bizName;
@property (nonatomic) unsigned int storeFileCount;
@property (nonatomic) unsigned long long storeFileSize;
@property (nonatomic) BOOL isScannedStoreFile;
@property (nonatomic) unsigned long long configMaxStoreFileSize;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithBizName:(id)a0;
- (void)setStoreFileCount:(unsigned int)a0 fileSize:(unsigned long long)a1;
- (void)addFileWithSize:(unsigned long long)a0;
- (void)removeFileWithSize:(unsigned long long)a0;
- (void)checkScanStoreFile;
- (void)scanStoreFile;
- (void).cxx_destruct;

@end
