@class NSString, BrandServiceStorage;

@interface BrandServiceMgr : MMUserService <MMServiceProtocol, IMsgExt> {
    BrandServiceStorage *m_serviceStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (long long)GetContinueLocationReportInterval;
- (void)MarkHasSetLocationForUser:(id)a0;
- (BOOL)HasSetLocationForUser:(id)a0;
- (void)ResetLocationForUser:(id)a0;
- (id)pathForStorage;
- (void)loadStorage;
- (void)saveStorage;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void).cxx_destruct;

@end
