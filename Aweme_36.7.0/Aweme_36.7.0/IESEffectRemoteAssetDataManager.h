@class IESEffectConfig, NSMutableDictionary, NSRecursiveLock;

@interface IESEffectRemoteAssetDataManager : NSObject

@property (weak, nonatomic) IESEffectConfig *config;
@property (retain, nonatomic) NSMutableDictionary *assetInfoCache;
@property (retain, nonatomic) NSRecursiveLock *rwLock;

+ (id)sharedManager;

- (id)assetModelWithAssetResourceID:(id)a0;
- (id)assetFilePathWithAssetModel:(id)a0;
- (void)insertAssetInfoAfterDownloadWithModel:(id)a0 assetFilePath:(id)a1;
- (BOOL)isEffectRemoteAssetReadyWithAssetList:(id)a0;
- (void)insertEntireAssetModelToMemory:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
