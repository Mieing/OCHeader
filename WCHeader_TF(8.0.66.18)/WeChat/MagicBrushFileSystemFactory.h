@class MemoryMappedKV, NSMapTable, NSString;

@interface MagicBrushFileSystemFactory : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *mBizFsMap;
@property (retain, nonatomic) NSMapTable *mPublicServiceFsMap;
@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)addBizFsMap:(id)a0 bizFileSystem:(id)a1;
- (void)removeBizFsMap:(id)a0;
- (void)addPublicServiceFsMap:(id)a0 bizFileSystem:(id)a1;
- (void)removePublicServiceFsMap:(id)a0;
- (id)getBizFileSystemWithCustom:(id)a0 pkgPath:(id)a1 customName:(id)a2 prefix:(id)a3;
- (id)publicServiceGetOrCreateBizFileSystem:(id)a0;
- (id)getOrCreateBizFileSystem:(id)a0 pkgPath:(id)a1 prefix:(id)a2 assetsFS:(id)a3 externalFS:(id)a4;
- (id)getOrCreatePublicServiceFileSystem:(id)a0 pkgPath:(id)a1 assetsFS:(id)a2 bizNameSet:(id)a3;
- (void)destroyBizPkgFileSystem:(id)a0;
- (void)setFSLifeState:(id)a0 state:(BOOL)a1;
- (BOOL)getBizFsState:(id)a0;
- (unsigned int)getBizFsOpenTime:(id)a0;
- (id)getMBWxaFileSystem:(id)a0 bizName:(id)a1;
- (void).cxx_destruct;

@end
