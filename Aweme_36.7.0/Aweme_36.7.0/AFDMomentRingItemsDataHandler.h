@class NSString, AFDMomentMineReadItemsHelper;

@interface AFDMomentRingItemsDataHandler : AFDMomentColorRingTableDataHandler <AFDMomentRingItemsDataHandlerProtocol>

@property (retain, nonatomic) AFDMomentMineReadItemsHelper *mineReadItemsHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markHasReadOthersRingItem:(id)a0 targetUid:(id)a1;
- (void)markHasReadAllMyRingItems;
- (id)getCurrentColorRingItemInfoWithUid:(id)a0;
- (id)getRingItemWithUid:(id)a0 itemId:(id)a1;
- (void)didPrepareDatabase;
- (void)dataSourceDidChange;
- (BOOL)updateUser:(id)a0 withNewUser:(id)a1;
- (void)didInitDataProvider;
- (void)didIgnoreReverseCloseFriend:(id)a0;
- (void)didReleaseEachOtherCloseFriends:(id)a0;
- (void)didAppendMomentWithPublishModel:(id)a0;
- (void)didFinishPublishMomentWithPublishModel:(id)a0 isSuccess:(BOOL)a1;
- (void)didFinishPublishStoryWithAwemeModel:(id)a0 isSuccess:(BOOL)a1;
- (void)didChangeAweme:(id)a0 toVisibleScope:(long long)a1;
- (long long)getRingStatusWithModel:(id)a0;
- (void)handleRingItemsWhenUpdateAllData;
- (void)syncUserIDToRingItemsOfModel:(id)a0;
- (void)getRingItemStatusWithModel:(id)a0 completion:(id /* block */)a1;
- (void)syncReadStatusFromOldModel:(id)a0 toNewModel:(id)a1;
- (void)removeCloseFriendsVisibleRingItems:(id)a0;
- (BOOL)doesItemAlreadyExistWithModel:(id)a0 itemId:(id)a1;
- (long long)getPrivacyStatusFromPublishModel:(id)a0;
- (long long)getPrivacyStatusFromAwemeModel:(id)a0;
- (id)getRingItemWithModel:(id)a0 itemId:(id)a1;
- (id)getCurrentColorRingItemInfoWithModel:(id)a0;
- (void).cxx_destruct;

@end
