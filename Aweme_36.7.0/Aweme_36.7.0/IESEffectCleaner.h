@class IESEffectConfig, NSMutableSet, IESManifestManager;

@interface IESEffectCleaner : NSObject

@property (weak, nonatomic) IESEffectConfig *config;
@property (weak, nonatomic) IESManifestManager *manifestManager;
@property BOOL cleaningEffectsDirectoryFlag;
@property BOOL cleaningAlgorithmDirectoryFlag;
@property BOOL cleaningTmpDirectoryFlag;
@property BOOL cleaningRemoteAssetDirectoryFlag;
@property (retain, nonatomic) NSMutableSet *allowPanelList;

- (void)cleanEffectsDirectoryFileWithPolicy:(long long)a0 effectMD5s:(id)a1 completion:(id /* block */)a2;
- (void)cleanEffectsDirectoryCallbackWithCompletion:(id /* block */)a0;
- (void)cleanAlgorithmsDirectoryWithModelMD5s:(id)a0 completion:(id /* block */)a1;
- (void)cleanEffectsDirectoryWithUnCleanPanelList:(id)a0 policy:(long long)a1 completion:(id /* block */)a2;
- (id)initWithConfig:(id)a0 manifestManager:(id)a1;
- (void)cleanEffectsDirectoryWithPolicy:(long long)a0 completion:(id /* block */)a1;
- (void)autoCleanEffectsDirectoryByLRUWithCompletion:(id /* block */)a0;
- (void)autoCleanAlgorithmsDirectoryByLRUWithCompletion:(id /* block */)a0;
- (void)cleanTmpDirectoryWithPolicy:(long long)a0 completion:(id /* block */)a1;
- (void)addAllowListForEffectUnClean:(id)a0;
- (void)removeExistAllowPanelListIfNeed:(id)a0;
- (id)currentAllowList;
- (void)vacuumDatabaseFile;
- (void)cleanAlgorithmDirectory:(id /* block */)a0;
- (void)cleanRemoteAssetDirectory:(id /* block */)a0;
- (void)cleanEffectsDirectoryFileWithEffectRecords:(id)a0 completion:(id /* block */)a1;
- (void)cleanAlgorithmsDirectoryWithAlgorithmRecords:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
