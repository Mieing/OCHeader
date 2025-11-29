@class NSString, WKProcessPool;

@interface YYWKWebViewProcessPoolMgr : MMUserService <MMServiceProtocol, MMCleanCacheMgrExt> {
    WKProcessPool *m_processPool;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)processPool;
- (void)onCacheMgrCleanCacheWarning;
- (void).cxx_destruct;

@end
