@class MemoryMappedKV, NSString;

@interface BrandPaySubcribeMgr : MMUserService <MPPageRelatedInfoMgrExt, IMsgExt, IExptServiceExt, MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mappedKV;
@property (nonatomic) BOOL isPaySubscribeOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPaySubcribeOpen;
- (BOOL)isMPPagePaid:(id)a0;
- (BOOL)isMPPagePaidWithPageIdentifier:(id)a0;
- (BOOL)updateMPPageHasPaidWithFullUrl:(id)a0;
- (BOOL)hasUserPaySubscribeEntry;
- (id)paySubscribeEntryUrl;
- (void)updateUserPaySubcribeEntryInfo:(BOOL)a0 paySubscribeEntryUrl:(id)a1;
- (BOOL)isShowRedDotWithPath:(unsigned long long)a0;
- (void)diposeRedDotWithPath:(unsigned long long)a0;
- (void)configueShowRedDot:(BOOL)a0 path:(unsigned long long)a1;
- (void)clearAllPayStatus;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)registerExtension;
- (void)unregisterExtension;
- (void)resetMappedKv;
- (BOOL)updateMPPagePayStatusWithPageIdentifier:(id)a0 fullUrl:(id)a1;
- (BOOL)updateMPPageHasPaidWithPayInfoArr:(id)a0;
- (void)onBatchUpdateMPPageRelatedInfoArr:(id)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
