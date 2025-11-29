@class NSDictionary, NSString;

@interface EcsEcInitService : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSDictionary *cmdHandlerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onGetBizId1:(long long)a0 data:(id)a1;
- (void)processCgiWithScene:(unsigned int)a0 params:(id)a1;
- (BOOL)useEcsNewLogic;
- (BOOL)isFreqLimit:(int)a0 withScene:(unsigned int)a1;
- (void)updateInitCmdNextRequestTime:(int)a0 nextRequestTime:(unsigned long long)a1;
- (unsigned long long)getInitCmdNextRequestTime:(int)a0;
- (id)getKeyOfInitCmd:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleResp:(id)a0;
- (void).cxx_destruct;

@end
