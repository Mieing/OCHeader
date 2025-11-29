@class WebStorageDb, NSString;

@interface WebStorageMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WebStorageDb *storageDb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (long long)getAllMaxSize;
- (long long)getMaxSize:(id)a0;
- (BOOL)checkIfSizeExceed:(id)a0 NeedSize:(unsigned long long)a1;
- (id)getStorage:(id)a0 Key:(id)a1;
- (BOOL)clearAllStorage:(id)a0;
- (BOOL)clearStorage:(id)a0 Key:(id)a1;
- (BOOL)setStorage:(id)a0 Key:(id)a1 Value:(id)a2 WeightStr:(id)a3 ExpireTime:(long long)a4;
- (void)kickOutStrategy:(id)a0;
- (void)tryKickOutExpireFile;
- (void)tryKickOut:(id)a0;
- (void)tryKickOutForAllAppId;
- (BOOL)cleanDirAndConfig:(id)a0 DirPath:(id)a1;
- (BOOL)cleanFileAndConfig:(id)a0 Key:(id)a1 FilePath:(id)a2;
- (id)getAllConfig;
- (id)getAllGlobalConfig;
- (id)getAllFile:(id)a0;
- (void).cxx_destruct;

@end
