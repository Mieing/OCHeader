@class BrandFansContactStorage, NSString, NSMutableDictionary, NSMutableArray;

@interface BrandFansContactMgr : MMUserService <PBMessageObserverDelegate, BizTlPersonalCenterMgrExt, MMServiceProtocol>

@property (copy, nonatomic) NSString *bizuin;
@property (retain, nonatomic) BrandFansContactStorage *contactStorage;
@property (retain, nonatomic) NSMutableDictionary *contactUpdateTimes;
@property (nonatomic) BOOL isUpdating;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getContact:(id)a0;
- (id)getContact:(id)a0 bizUin:(id)a1;
- (void)forceUpdateProfileForUsrName:(id)a0;
- (void)updateProfileForUsrNames:(id)a0;
- (void)checkQueue;
- (void)batchRequestUsernames:(id)a0;
- (void)onReceiveBatchResponse:(id)a0;
- (void)fetchContactDetailInfo:(id)a0;
- (void)fetchInteractiveUserDetailInfo:(id)a0 userType:(unsigned int)a1;
- (void)fetchInteractiveUserDetailInfo:(id)a0 userType:(unsigned int)a1 bizUin:(id)a2;
- (void)onBizPersonalCenterLoginBizUin:(id)a0;
- (void)onBizPersonalCenterLogoutBizUin:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)blockContact:(id)a0 bizuin:(id)a1 completion:(id /* block */)a2;
- (void)unblockContact:(id)a0 bizuin:(id)a1 completion:(id /* block */)a2;
- (void)setBlock:(BOOL)a0 contact:(id)a1 bizuin:(id)a2 completion:(id /* block */)a3;
- (void)blockInteractiveUser:(id)a0 userType:(unsigned int)a1 bizuin:(id)a2 completion:(id /* block */)a3;
- (void)unblockInteractiveUser:(id)a0 userType:(unsigned int)a1 bizuin:(id)a2 completion:(id /* block */)a3;
- (void)setBlock:(BOOL)a0 interactiveUser:(id)a1 userType:(unsigned int)a2 bizuin:(id)a3 completion:(id /* block */)a4;
- (void)setBlock:(BOOL)a0 identityName:(id)a1 identityType:(unsigned int)a2 bizuin:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
