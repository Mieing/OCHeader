@class NSMutableDictionary;

@interface WCSnsLocalCacheMgr : MMObject {
    BOOL m_hadLoadedCache;
    NSMutableDictionary *m_dicLocalCache;
}

- (void)clearDelayShowInfoCache;
- (void)setDelayShowInfoNeedDelay:(id)a0;
- (void)setShowTime:(unsigned int)a0 WithFeedId:(id)a1;
- (id)getSnsOperationsWithFeedId:(id)a0;
- (id)getSnsOperationWrapWithFeedId:(id)a0;
- (void)updateOperationsWithFeedId:(id)a0 createTime:(unsigned int)a1 snsOperations:(id)a2;
- (void)mergeSnsOperationsWithFeedId:(id)a0 feedCreateTime:(unsigned int)a1 snsOperationsData:(id)a2;
- (void)saveSnsLocalCache;
- (void)callServiceInit;
- (void)callServiceEnterBackground;
- (void)callServiceTerminate;
- (void)callServiceMemoryWarning;
- (id)pathForDicLocalCache;
- (void)tryLoadDicLocalCache;
- (void)saveDicLocalCache;
- (void).cxx_destruct;

@end
