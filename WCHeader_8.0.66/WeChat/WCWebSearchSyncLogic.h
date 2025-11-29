@interface WCWebSearchSyncLogic : FinderCommonReddotSyncBaseLogic

- (id)init;
- (void)setSyncBuffer:(id)a0;
- (void)setLastBuffer:(id)a0;
- (id)otherRelatedKeyPathList;
- (void)syncWithScene:(unsigned int)a0;
- (void)syncWithActionNotifyData:(id)a0;
- (void)addSyncTask:(id)a0;
- (void)onEndWithContinueFlag;
- (void)triggerEnterForForegroundSync;
- (void)triggerEnterDiscoverySync;

@end
