@class MemoryMappedKV, NSMutableSet, NSString;

@interface MsgImgSearchPhashService : MMUserService <PBMessageObserverDelegate, IScanGoodsServiceExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *needCallbackContextSets;
@property (retain, nonatomic) MemoryMappedKV *searchPhashSlotKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSearchPhashEnable;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getPhashInfoWithPhashStr:(id)a0;
- (void)setPhashInfo:(id)a0 forPhashStr:(id)a1;
- (void)recordAndSearchPhashWithContext:(id)a0;
- (void)handleSearchPhashReq:(id)a0 context:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleSearchPhashResp:(id)a0;
- (id)imageForMessageWrap:(id)a0;
- (void)onFetchPhashConfigureSuccess:(id)a0 confVersion:(id)a1;
- (void)onFetchPhashConfigureFail:(long long)a0 errorMsg:(id)a1;
- (id)memoryMappedKV;
- (id)cdnFileIDForContext:(id)a0;
- (void).cxx_destruct;

@end
