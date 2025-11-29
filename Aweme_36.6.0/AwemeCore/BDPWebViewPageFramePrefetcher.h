@class NSDictionary, BDPUniqueID, BDPDynamicPluginLoadInstance;

@interface BDPWebViewPageFramePrefetcher : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) BDPDynamicPluginLoadInstance *pluginLoadInstance;
@property (retain, nonatomic) NSDictionary *allPageConfig;

- (id)initWithUniqueId:(id)a0;
- (void)tryLoadPageFrameJSInHandle:(id)a0 startPath:(id)a1 callback:(id /* block */)a2;
- (void)tryLoadAllPageFrameJSInMemoryLoaderWithCallback:(id /* block */)a0;
- (void)tryLoadPluginPathFrameJSWithStartPath:(id)a0 callback:(id /* block */)a1;
- (id)pageFrameDataWithPkgName:(id)a0 data:(id)a1;
- (void)tryLoadPageFrameJSWithPluginInHandle:(id)a0 startPath:(id)a1 callback:(id /* block */)a2;
- (id)pageFrameDataWithPkgNames:(id)a0 datas:(id)a1;
- (void)getPluginPageFrameDataWithPagePath:(id)a0 completion:(id /* block */)a1;
- (id)pluginPathFrameFilePathWithPage:(id)a0;
- (void).cxx_destruct;

@end
