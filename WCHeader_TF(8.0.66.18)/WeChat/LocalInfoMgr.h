@class CLocalInfo, NSString, NSRecursiveLock;

@interface LocalInfoMgr : MMRootService <MMServiceProtocol> {
    NSRecursiveLock *m_lock;
    CLocalInfo *m_localInfo;
}

@property (readonly, nonatomic) CLocalInfo *localInfo;
@property (nonatomic) BOOL disableSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)returnAsRawService;
- (void)loadLocalInfo;
- (BOOL)saveLocalInfo;
- (void)clearAllLocalInfo;
- (void)clearLocalInfo;
- (void)setMmtlsCtrlFlag:(unsigned int)a0 force:(BOOL)a1;
- (void).cxx_destruct;

@end
