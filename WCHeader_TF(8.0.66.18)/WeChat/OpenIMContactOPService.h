@class NSString, OpenIMContactOPCodePB;

@interface OpenIMContactOPService : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    BOOL m_bSyncOplogIng;
    OpenIMContactOPCodePB *m_openImContactOPlogCache;
    NSString *m_openImContactOPlogCacheDateFilePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)loadOpenImOPLogCacheInternal;
- (void)onServiceEnterForeground;
- (BOOL)InsertOpenImOplog:(unsigned int)a0 dtInput:(id)a1 needSync:(BOOL)a2;
- (void)NeedToSyncOplog;
- (void)checkSyncOplog;
- (void)startSyncOplog;
- (unsigned int)startOpenIMOplogType:(unsigned int)a0 dtInput:(id)a1;
- (unsigned int)startOpenIMOplogType:(unsigned int)a0 dtInput:(id)a1 observer:(id)a2;
- (void)OnOpenIMOplogResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)p_getOpenImContactOPlogCacheDataFilePath;
- (id)p_getOpenIMContactOPItemIdWithOplog:(unsigned int)a0 oplogData:(id)a1;
- (BOOL)p_saveOpenImContactOPlogCacheDataFileInternal;
- (void).cxx_destruct;

@end
