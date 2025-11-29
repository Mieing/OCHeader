@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface NewSyncPluginMgr : MMUserService <INewSyncExt, MMServiceProtocol, PBMessageObserverDelegate> {
    NSRecursiveLock *m_oMgrLock;
}

@property (retain, nonatomic) NSMutableDictionary *m_dicSelectorList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)InitSelectorList;
- (void)ResetNewSyncWrap:(unsigned int)a0;
- (BOOL)IsSelectorSyncIng:(unsigned int)a0;
- (BOOL)IsSelectorContinue:(unsigned int)a0;
- (void)SetSyncIngFlag:(BOOL)a0 Selector:(unsigned int)a1;
- (unsigned int)GetSelectorByCgi:(unsigned int)a0;
- (unsigned int)GetCgiBySelector:(unsigned int)a0;
- (id)GetSyncWrapBySelector:(unsigned int)a0;
- (void)SetSyncKeyMd5BySelector:(unsigned int)a0 Md5:(id)a1;
- (BOOL)IsMd5Different:(unsigned int)a0 Md5:(id)a1;
- (id)GetKeyBufferByType:(unsigned int)a0;
- (void)MergeKeyBufferByType:(unsigned int)a0 Buffer:(id)a1;
- (void)CheckSelector:(unsigned int)a0 Request:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onNewSyncPlugin:(unsigned int)a0;
- (void).cxx_destruct;

@end
