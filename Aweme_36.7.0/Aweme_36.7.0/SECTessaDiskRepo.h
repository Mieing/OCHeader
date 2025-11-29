@class NSString, NSLock, SECKeyChainService;
@protocol SECCnphoctProtocol;

@interface SECTessaDiskRepo : NSObject {
    NSLock *_fileOpLock;
}

@property (copy, nonatomic) NSString *dirPath;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *repoName;
@property (retain, nonatomic) SECKeyChainService *keychain;
@property (retain, nonatomic) id<SECCnphoctProtocol> cnphoct;
@property (copy) NSString *key;

+ (id)dirForRepoName:(id)a0;
+ (id)pathForRepoName:(id)a0;
+ (BOOL)repoExists:(id)a0;

- (id)initWithConfig:(id)a0 withRepoName:(id)a1;
- (void)loadKeyIfNeeded;
- (BOOL)ensureFileExists:(id)a0;
- (void)removeRepo;
- (void).cxx_destruct;
- (void)cleanup;
- (void)setup;
- (id)loadFromDisk;
- (void)writeToDisk:(id)a0;

@end
