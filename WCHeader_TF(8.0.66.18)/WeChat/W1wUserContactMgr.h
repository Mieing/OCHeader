@class NSMutableDictionary, NSString, NSMutableArray, W1wUserContactStorage;

@interface W1wUserContactMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) W1wUserContactStorage *contactStorage;
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
- (void)forceUpdateContactForUsrName:(id)a0;
- (void)updateUserNames:(id)a0;
- (void)checkQueue;
- (void)batchFetchContactDetailInfo:(id)a0 isInQueue:(BOOL)a1;
- (void)fetchContactDetailInfo:(id)a0;
- (void)onReceiveResponse:(id)a0 isInQueue:(BOOL)a1;
- (void).cxx_destruct;

@end
