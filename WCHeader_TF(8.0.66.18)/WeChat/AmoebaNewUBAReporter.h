@class AmoebaNewUBACacheStorage, NSNumber, NSMutableDictionary;

@interface AmoebaNewUBAReporter : NSObject {
    AmoebaNewUBACacheStorage *m_cacheStorage;
    NSNumber *m_openNewUBASwitch;
    unsigned long long m_reportStrMaxLimit;
    NSNumber *m_isReportAllUBA;
    NSMutableDictionary *m_pageEventCallbackBlocks;
}

+ (id)shareInstance;

- (id)init;
- (void)onAccountInit;
- (void)onAccountClearData;
- (BOOL)isOpenNewUBA;
- (BOOL)isReportAllUBA;
- (void)addPageEventCallbackBlock:(id /* block */)a0 key:(id)a1;
- (void)removePageEventCallbackBlock:(id)a0;
- (void)reportStandardEvent:(id)a0 time:(unsigned long long)a1 target:(id)a2 params:(id)a3;
- (void)reportKeyUBA:(id)a0 time:(unsigned long long)a1 target:(id)a2 data:(id)a3;
- (void)realReportKeyUBA:(id)a0 isKeyView:(BOOL)a1;
- (void)reportAllUBA:(id)a0 time:(unsigned long long)a1 data:(id)a2;
- (void)reportLogId:(unsigned long long)a0 time:(unsigned long long)a1;
- (void)reportFlutterAllOutEvent:(id)a0 time:(unsigned long long)a1 params:(id)a2;
- (void)realReportFlutterAllOutEvent;
- (void)handleUBACache:(id)a0 cacheTime:(unsigned long long)a1 isKeyView:(BOOL)a2;
- (void).cxx_destruct;

@end
