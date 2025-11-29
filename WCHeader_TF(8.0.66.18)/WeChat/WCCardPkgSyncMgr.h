@class NSData, WCCardPkgDB;
@protocol WCCardSyncMgrDelegate;

@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate> {
    NSData *_syncKeyBuffer;
    WCCardPkgDB *_wcCardPkgDB;
}

@property (weak, nonatomic) id<WCCardSyncMgrDelegate> delegate;

- (id)getSyncKeyBufferFilePath;
- (BOOL)saveSyncKeyBuffer:(id)a0;
- (void)loadSyncKeyBuffer;
- (id)init;
- (void)dealloc;
- (void)initDB:(id)a0;
- (void)clearSyncKey;
- (void)syncByNotify:(unsigned int)a0 Scene:(unsigned int)a1;
- (void)handleWCCardSyncResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
