@class WCShareCardDB;
@protocol WCShareCardSyncMgrDelegate;

@interface WCShareCardSyncMgr : MMObject <PBMessageObserverDelegate> {
    unsigned long long _syncMaxSeq;
    WCShareCardDB *_wcShareCardDB;
    unsigned int _defaultIntervalSeconds;
    unsigned int _lastSyncTime;
}

@property (weak, nonatomic) id<WCShareCardSyncMgrDelegate> delegate;

- (id)init;
- (void)initDB:(id)a0;
- (void)dealloc;
- (void)clearSyncKey;
- (void)makeSyncCgi;
- (void)doSyncInternal;
- (void)doSync;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleShareCardSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)loadSyncSeq;
- (id)getWCShareCardSyncInfoPath;
- (BOOL)saveSyncMaxSeq:(unsigned long long)a0;
- (void).cxx_destruct;

@end
