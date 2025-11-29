@class BDPModel, BDPUniqueID, NSString;
@protocol BDPKVInterface, BDPCookieStorageInterface;

@interface BDPSandbox : NSObject

@property (retain, nonatomic) id<BDPKVInterface> localStorage;
@property (retain, nonatomic) id<BDPKVInterface> localStorageBackup;
@property (retain, nonatomic) id<BDPKVInterface> privateStorage;
@property (retain, nonatomic) id<BDPKVInterface> privateStorageBackup;
@property (retain, nonatomic) id<BDPCookieStorageInterface> cookieJar;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPModel *model;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (readonly, copy, nonatomic) NSString *pkgPath;
@property (readonly, copy, nonatomic) NSString *tmpPath;
@property (readonly, copy, nonatomic) NSString *userPath;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *scPkgPath;
@property (readonly, copy, nonatomic) NSString *scTmpPath;
@property (readonly, copy, nonatomic) NSString *scUserPath;

- (void)setupStorageIfNeeded;
- (BOOL)hasAccessRightsForPath:(id)a0;
- (BOOL)hasWriteRightsForPath:(id)a0;
- (BOOL)hasRemoveRightsBelowFolderPath:(id)a0;
- (BOOL)hasWriteRightsBelowFolderPath:(id)a0;
- (BOOL)hasReadRightForPath:(id)a0;
- (void)checkStorageAndRebuildIfNeeded;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;
- (void)updateWithModel:(id)a0;

@end
