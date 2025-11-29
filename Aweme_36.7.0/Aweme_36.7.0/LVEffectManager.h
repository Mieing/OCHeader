@interface LVEffectManager : NSObject

+ (void)downloadEffectListWithResourceIds:(id)a0 panel:(id)a1 completion:(id /* block */)a2;
+ (void)downloadEffectListWithEffectIDS:(id)a0 completion:(id /* block */)a1;
+ (void)downloadEffect:(id)a0 completion:(id /* block */)a1;
+ (void)setup:(id)a0 channel:(id)a1 region:(id)a2 domain:(id)a3 language:(id)a4 deviceID:(id)a5 devicePlatform:(id)a6 appID:(id)a7 appVersion:(id)a8 extraConfig:(id /* block */)a9 autoUpdateAllEffectList:(BOOL)a10 isAbroad:(BOOL)a11 needCache:(BOOL)a12;
+ (id)lvEffectPlatform;
+ (id)effectPanelList;
+ (void)downloadList:(id)a0 needCache:(BOOL)a1 completion:(id /* block */)a2;
+ (void)checkStickerUpdate:(id)a0 rootPath:(id)a1;
+ (void)checkEffectUpdate:(id)a0 rootPath:(id)a1;
+ (void)checkVideoEffectUpdate:(id)a0 rootPath:(id)a1;
+ (void)checkTransitionUpdate:(id)a0 rootPath:(id)a1;
+ (void)checkVideoMaskUpdate:(id)a0 rootPath:(id)a1;
+ (void)checkMaterialAnimationUpdate:(id)a0 rootPath:(id)a1;
+ (void)cleanStickerUnusedResource:(id)a0 rootPath:(id)a1;
+ (void)cleanEffectUnusedResource:(id)a0 trackType:(unsigned long long)a1 realType:(unsigned long long)a2 rootPath:(id)a3;
+ (void)cleanTransitionUnusedResource:(id)a0 rootPath:(id)a1;
+ (void)cleanMaterialAnimationUnusedResource:(id)a0 rootPath:(id)a1;
+ (void)cleanFilterUnusedResource:(id)a0 rootPath:(id)a1;
+ (void)cleanVideoMaskUnusedResource:(id)a0 rootPath:(id)a1;
+ (id)cacheEffect:(id)a0 resourceID:(id)a1 effectID:(id)a2;
+ (BOOL)replaceEffect:(id)a0 targetFilePath:(id)a1;
+ (id)downloadEffectIDs;
+ (id)downloadLock;
+ (void)downloadEffect:(id)a0 tryMaxCount:(unsigned long long)a1 validator:(id)a2 completionWithTryCount:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)updateEffectIfNeed:(id)a0 resourceID:(id)a1 effectID:(id)a2 md5:(id)a3 targetFolder:(id)a4;
+ (void)cleanUnusedResource:(id)a0 usedSubpaths:(id)a1;
+ (void)requestAllEffectListWithCache:(BOOL)a0;
+ (void)checkUpdateIfNeeded:(id)a0 rootPath:(id)a1;
+ (void)cleanUnusedResourceIfNeeded:(id)a0 rootPath:(id)a1;
+ (void)cleanUnusedResource:(id)a0 subpaths:(id)a1 usedSubpaths:(id)a2;
+ (id)lokiPlatformProxy;
+ (void)downloadList:(id)a0 needCache:(BOOL)a1 resourceIDs:(id)a2 completion:(id /* block */)a3;
+ (void)downloadEffectItem:(id)a0 tryMaxCount:(unsigned long long)a1 validator:(id)a2 completionWithTryCount:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)downloadList:(id)a0 completion:(id /* block */)a1;
+ (void)downloadEffectItem:(id)a0 completion:(id /* block */)a1;
+ (void)checkEffectUpdate:(id)a0 completion:(id /* block */)a1;
+ (id)cachedEffects:(id)a0;
+ (void)setupEffectDownloadProxy;
+ (BOOL)switchLanguage:(id)a0;
+ (void)setRegion:(id)a0;
+ (id)proxy;
+ (id)defaultInstance;
+ (void)setEnvironment:(BOOL)a0;

@end
