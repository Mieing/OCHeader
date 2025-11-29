@class YYDiskCache, NSString, SECKeyChainService, NSLock;
@protocol SECCnphoctProtocol;

@interface SECTessaDiskKVRepo : NSObject <SECTessaDiskTaskDelegate, SECTessaDiskStorage> {
    NSLock *_keyLock;
    unsigned long long _diskSizeLimit;
}

@property (retain, nonatomic) YYDiskCache *disk;
@property (copy, nonatomic) NSString *dirPath;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *repoName;
@property (retain, nonatomic) SECKeyChainService *keychain;
@property (retain, nonatomic) id<SECCnphoctProtocol> cnphoct;
@property (copy, nonatomic) NSString *key;
@property BOOL ready;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareDisk;
- (id)diskStoragePath;
- (BOOL)diskStorageAvailable;
- (unsigned long long)diskStorageSize;
- (id)diskStorageEntries;
- (id)initWithConfig:(id)a0 withRepoName:(id)a1;
- (id)diskProvider;
- (id)cnphoctProvider;
- (id)createPerfEvent;
- (id)cnphoctKey;
- (void)resetCnphoctKey;
- (id)createTask;
- (void)loadKeyIfNeeded;
- (id)loadTessaFromDisk:(id)a0;
- (id)allTessaIds;
- (void)removeTessaFromDisk:(id)a0;
- (void)active;
- (BOOL)available;
- (void).cxx_destruct;
- (void)cleanup;
- (void)setup;
- (unsigned long long)size;
- (void)writeToDisk:(id)a0;

@end
