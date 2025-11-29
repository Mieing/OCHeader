@class NSString;

@interface QVisCacheManager : NSObject

@property (copy, nonatomic) NSString *configPath;
@property (copy, nonatomic) NSString *key;

- (BOOL)checkIsLayerAuthen:(id)a0;
- (void)saveLocalData:(id)a0 layer:(id)a1;
- (void)writeData:(id)a0 layer:(id)a1;
- (id)getLayerCacheData:(id)a0;
- (void)saveVisualLayerConfig:(id)a0;
- (id)getLayersDictionaryFromConfigData:(id)a0;
- (void)saveModelLayerData:(id)a0 layer:(id)a1;
- (id)extractModelIDFromDictionary:(id)a0;
- (id)getModelLayerDataID:(id)a0;
- (BOOL)validateCacheConfigVersion:(id)a0 dataVer:(id)a1 layer:(id)a2;
- (id)createIdentifier;
- (id)createCommonVector:(id)a0;
- (void)createInfoFolder:(id)a0;
- (id)getLayerCachePath:(id)a0;
- (id)getVisLayerFileName:(id)a0;
- (void)getLayerCacheDataVerAndSytleVer:(id)a0 verStruct:(struct { id x0; id x1; } *)a1;
- (id)getModelLayerCachePath:(id)a0;
- (void).cxx_destruct;

@end
