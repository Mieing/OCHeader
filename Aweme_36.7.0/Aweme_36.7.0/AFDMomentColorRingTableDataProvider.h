@class NSString, AWEBinding;

@interface AFDMomentColorRingTableDataProvider : AFDColorRingTableBaseDataProvider <AWEUserMessage, AFDAwemePermissionMessage, AWEPublishTaskMessage, AFDMomentColorRingTableDataProviderProtocol>

@property (copy, nonatomic) NSString *recentPublishMomentId;
@property (retain, nonatomic) AWEBinding *draftModelStateBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prepareDataProvider;
+ (id)handlerClassArray;

- (void)task:(id)a0 didWholeEndWithResult:(long long)a1 error:(id)a2;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishCloseFriendsWithUser:(id)a0 status:(long long)a1;
- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (void)updateColorRingInfoWithAPIData:(id)a0;
- (void)deleteAwemeWithItemID:(id)a0 withUserID:(id)a1;
- (BOOL)updateUser:(id)a0 withNewUser:(id)a1;
- (void)didUpdateUsers:(id)a0;
- (void)handleDeleteMomentNotification:(id)a0;
- (void)handleIgnoreReverseCloseFriendsNotification:(id)a0;
- (void)handleMomentPublishNotification:(id)a0;
- (void)handleDeleteAwemeNotification:(id)a0;
- (long long)getVisibleStatusWithPermissionType:(long long)a0;
- (id)createModelWithRingInfo:(id)a0 uid:(id)a1;
- (void)trackMomentColorRingDiffWithNewUser:(id)a0 oldUser:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addObservers;

@end
