@class NSString, NSRecursiveLock;

@interface WAFileStorageInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (nonatomic) unsigned int storeFileCount;
@property (nonatomic) unsigned long long storeFileSize;
@property (nonatomic) BOOL isScannedStoreFile;
@property (nonatomic) unsigned long long configMaxStoreFileSize;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithAppID:(id)a0;
- (void)updateConfigMaxStoreFileSize;
- (void)setStoreFileCount:(unsigned int)a0 fileSize:(unsigned long long)a1;
- (void)addFileWithSize:(unsigned long long)a0;
- (void)removeFileWithSize:(unsigned long long)a0;
- (void)checkScanStoreFile;
- (void)scanStoreFile;
- (void).cxx_destruct;

@end
