@class MemoryMappedKV, NSString, MMWebCanvasBasePkgInfo, MMWebCanvasBizPkgInfo;

@interface MMWebCanvasPkgMgr : MMUserService <WAPrefetchMgrExt, MMServiceProtocol> {
    MemoryMappedKV *_mappedKV;
    MMWebCanvasBasePkgInfo *_builtInBasePkgInfo;
    MMWebCanvasBizPkgInfo *_builtInBizPkgInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basePkgAppId;
+ (id)bizPkgAppId;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)prefetchBaseAndBizPkgWithScene:(unsigned long long)a0;
- (id)getPkgInfo:(BOOL)a0;
- (id)getBasePkgInfo;
- (unsigned long long)isBasePkgInfoUsable:(id)a0 pGetPkgInfoIfUsable:(id *)a1;
- (void)prefetchBasePkg;
- (id)builtInBasePkgInfo;
- (id)getBizPkgInfo;
- (unsigned long long)isBizPkgInfoUsable:(id)a0 pGetPkgInfoIfUsable:(id *)a1;
- (void)prefetchBizPkg;
- (id)builtInBizPkgInfo;
- (void)prefetchGetCodeCmd:(id)a0 didFinishDownloadWithRet:(BOOL)a1 infoData:(id)a2 remainRetryCount:(unsigned long long)a3;
- (void)handleNewPkgWithInfoData:(id)a0;
- (id)__basePkgUsername;
- (id)__basePkgAppId;
- (id)__bizPkgUsername;
- (id)__bizPkgAppId;
- (void)resetMappedKv;
- (id)mappedKV;
- (void)reportMonitorIdKey:(unsigned int)a0;
- (void).cxx_destruct;

@end
