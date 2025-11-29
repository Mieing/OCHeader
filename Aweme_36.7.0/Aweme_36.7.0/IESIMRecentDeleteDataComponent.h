@class NSArray, NSDictionary, NSMutableIndexSet, NSString;

@interface IESIMRecentDeleteDataComponent : AWEIMComponentBase <IESIMRecentDeleteDataInterface>

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned long long pageCount;
@property (copy, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) NSMutableIndexSet *selectedIndexSet;
@property (nonatomic) unsigned long long selectedIndexCount;
@property (nonatomic) BOOL selectAllFlag;
@property (retain, nonatomic) id verifyEventSubscriber;
@property (copy, nonatomic) NSDictionary *settingConfigDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_willDealloc;
- (void)componentDidMounted:(id)a0;
- (void)selectIndex:(unsigned long long)a0 checked:(BOOL)a1;
- (void)trackFirstFrameCost:(double)a0 success:(BOOL)a1;
- (void)resetSelectAll;
- (void)deleteSelectedChatsWithCompletion:(id /* block */)a0;
- (void)recoverSelectedChatsWithCompletion:(id /* block */)a0;
- (void)fetchFirstPageRecentDeleteListWithCompletion:(id /* block */)a0;
- (void)fetchMoreRecentDeleteListWithCompletion:(id /* block */)a0;
- (void)trackPageButtonClick:(id)a0;
- (void)trackShowPage;
- (void)p_handleUCVerifyResultEventWithParams:(id)a0;
- (void)p_handleFetchDeleteList:(id)a0 cidToVMMap:(id)a1 uidToVMMap:(id)a2 hasMore:(BOOL)a3 nextCursor:(long long)a4 tik:(double)a5 isInit:(BOOL)a6 error:(id)a7 completion:(id /* block */)a8;
- (void)p_fetchListWithCompletion:(id /* block */)a0;
- (void)trackFetchDeletedConvListStartTime:(double)a0 isInit:(BOOL)a1 groupCids:(id)a2 peerUids:(id)a3 error:(id)a4;
- (void)trackPageActionSheetClick:(id)a0 conCount:(unsigned long long)a1 cost:(double)a2 error:(id)a3;
- (void)selectAll;
- (void).cxx_destruct;

@end
