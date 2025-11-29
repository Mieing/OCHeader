@class NSString, MMCompatibleCGIDB;

@interface MMCompatibleCGIMgr : MMUserService <MMServiceProtocol> {
    MMCompatibleCGIDB *m_compatibleCGIDB;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)onServiceClearData;
- (void)dealloc;
- (void)saveCompatibleCGIData:(id)a0 compatibleCGIType:(unsigned int)a1;
- (void)saveCompatibleCGIData:(id)a0 compatibleCGIType:(unsigned int)a1 pbUniqueID:(id)a2;
- (void)reloadCompatibleCGIDataWithId:(id)a0 handleblock:(id /* block */)a1;
- (id)getPBRequestObject:(id)a0;
- (id)getPBResponseObject:(id)a0;
- (id)getPbUniqueIDWithPBCGIWrap:(id)a0 andCompatibleCGIType:(unsigned int)a1;
- (id)getPbUniqueIDWithCompatibleCGIType:(unsigned int)a0 pbInfo:(id)a1;
- (id)getCompatibleCGIDataWithId:(id)a0;
- (unsigned int)getUiCgiWithCompatibleCGIType:(unsigned int)a0;
- (id)getPbUniqueIDPrefixWithCompatibleCGIType:(unsigned int)a0;
- (BOOL)checkHadCompatibleCGIDataWithId:(id)a0;
- (void).cxx_destruct;

@end
