@class NSMutableDictionary;

@interface WCPatternCacheMgr : NSObject {
    NSMutableDictionary *m_cache;
    BOOL m_needWriteBack;
    BOOL m_needLoadData;
}

- (id)pathForData;
- (void)tryLoadData;
- (void)trySaveData;
- (id)init;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (unsigned long long)onServiceCleanCache;
- (void)tryGetWCDataItemPattern:(id)a0;
- (void).cxx_destruct;

@end
