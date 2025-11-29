@class NSString, NSError, BDPUniqueID, UnisusPluginInfo;

@interface BDPNativeAppPluginLoader : BDPODRXLoader <BDPFileHandleProtocol> {
    NSError *_openError;
}

@property (retain, nonatomic) UnisusPluginInfo *plugin;
@property (copy, nonatomic) NSString *pluginID;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyPluginLoader;
+ (id)pluginLoaderWithPluginId:(id)a0 group:(id)a1;

- (long long)createLoadStatus;
- (void)readDataWithFilePath:(id)a0 syncIfDownloaded:(BOOL)a1 dispatchQueue:(id)a2 completion:(id /* block */)a3;
- (void)readDataWithFilePath:(id)a0 dispatchQueue:(id)a1 completion:(id /* block */)a2;
- (id)readDataWithFilePath:(id)a0 error:(id *)a1;
- (BOOL)pluginInfoIsValid;
- (void)readDataWithFile:(id)a0 async:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (long long)loadStatus;

@end
