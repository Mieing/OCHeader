@protocol WCCardBulkImportMgrDelegate;

@interface WCCardBulkImportMgr : MMObject <PBMessageObserverDelegate> {
    id<WCCardBulkImportMgrDelegate> _delegate;
}

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)getBulkCard:(id)a0;
- (void)importBulkCard:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetBulkCardResp:(id)a0 Event:(unsigned int)a1;
- (void)handleImportBulkCardResp:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
