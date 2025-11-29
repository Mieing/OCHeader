@class NSString, WKProcessPool;

@interface YYQBWebViewProcessPoolMgr : MMUserService <MMServiceProtocol, MMCleanCacheMgrExt> {
    WKProcessPool *m_processPool;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceClearData;
- (void)onServiceInit;
- (id)processPool;
- (void)removeProcessPool;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;

@end
