@class MemoryMappedKV, NSString;

@interface EcsFinderLiveMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *ecsFinderLiveInfoSlotKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)shouldUpdateNow:(id)a0;
- (void)updateFinderLiveInfoTime:(id)a0;
- (id)keyForLiveSaveExportIdTimeWithExportId:(id)a0;
- (id)keyForLiveRefreshSvrIntervalWithExportId:(id)a0;
- (BOOL)shouldUpdateExportIdListNow:(id)a0;
- (void)getFinderLiveInfo:(id)a0 forceUpdate:(BOOL)a1 completion:(id /* block */)a2;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1 completion:(id /* block */)a2;
- (id)transSvrLiveInfo:(id)a0;
- (void).cxx_destruct;

@end
