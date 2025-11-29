@class _TtC6WeChat21WSTemplateMgrReporter, NSString, NSOperationQueue, WSTemplatePackageManager;

@interface WSTemplateBaseMgr : MMUserService <MMServiceProtocol, IWSTemplateConfigDevelopServiceExt, MMResourceMgrExt> {
    NSOperationQueue *m_updateResourceQueue;
}

@property (retain, nonatomic) _TtC6WeChat21WSTemplateMgrReporter *reporter;
@property (retain, nonatomic) WSTemplatePackageManager *packageMgr;
@property (nonatomic) unsigned int packageVersion;
@property (copy, nonatomic) NSString *debugModuleName;
@property (nonatomic) long long activeTemplateCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getServiceOfType:(unsigned long long)a0;

- (void)checkResourceWithCompletion:(id /* block */)a0;
- (id)init;
- (void)initRegister;
- (void)dealloc;
- (void)onServiceInit;
- (id)defaultTemplateZipPath;
- (unsigned int)defaultTemplateZipVersion;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned int)packageResouceSubType;
- (unsigned long long)localJSBizType;
- (unsigned int)getTemplateVersion:(unsigned long long)a0;
- (unsigned int)activeTemplateVersion;
- (id)getTemplateResourceFolder:(unsigned long long)a0;
- (id)getTemplateHTMLPath:(unsigned long long)a0;
- (id)activeTemplateHTMLPath;
- (void)removePackage:(unsigned long long)a0;
- (void)reloadPackageConfig:(unsigned long long)a0;
- (id)getConfigData:(unsigned long long)a0;
- (id)getConfig:(unsigned long long)a0;
- (id)getUpdatedTemplateResoucePath;
- (unsigned int)getVersionWithResoucePath:(id)a0;
- (void)showVersionDescViewWithTitle:(id)a0;
- (unsigned long long)activePackageType;
- (id)getPackage:(unsigned long long)a0;
- (id)getTempTemplateResoucePath;
- (void)checkAndRemoveExpiredDevelopH5;
- (void)checkUpdatedPackageValid;
- (void)reportVersion;
- (id)busineseName;
- (id)packageVersionCacheKey;
- (void)checkPackageVersionUpdate;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (BOOL)doTemplateResUpdate;
- (BOOL)doTemplateResUpdateFromPath:(id)a0 version:(unsigned int)a1;
- (BOOL)doTemplateResUpdateFromPath:(id)a0 version:(unsigned int)a1 checkActiveInstance:(BOOL)a2;
- (BOOL)doTemplateResUpdateWithType:(unsigned int)a0 subType:(unsigned int)a1 srcPath:(id)a2 packageVersion:(unsigned int)a3;
- (void)onResHasNewWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void)onResBeginDownloadWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void)onResFinishDownload:(BOOL)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2 version:(unsigned int)a3;
- (BOOL)applyToDevelopH5:(id)a0;
- (unsigned int)getVersionForDevelopH5;
- (void).cxx_destruct;

@end
