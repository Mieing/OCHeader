@class NSString, BDPODRXFileBasicModel, NSError;

@interface BDPDynamicPluginLoader : BDPODRXLoader

@property (retain, nonatomic) BDPODRXFileBasicModel *pluginBasic;
@property (copy, nonatomic) NSString *pluginID;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL isIndsrty;
@property (retain, nonatomic) NSError *downloadError;

+ (id)emptyPluginLoader;
+ (id)pluginLoaderWithPath:(id)a0 pluginModel:(id)a1;

- (id)basic;
- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (void)fileHandleDidLoadFromCache;
- (long long)loadStatusForPagePath:(id)a0;
- (void)updatePluginPath:(id)a0 pluginModel:(id)a1;
- (BOOL)isEmptyPluginLoader;
- (void).cxx_destruct;

@end
