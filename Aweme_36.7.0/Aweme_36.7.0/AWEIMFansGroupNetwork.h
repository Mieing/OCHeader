@class NSString;

@interface AWEIMFansGroupNetwork : NSObject <IESIMFansGroupOperationInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchMasterFansGroupInfoWithCursor:(long long)a0 fansNumber:(long long)a1 conversationID:(long long)a2 completion:(id /* block */)a3;
- (void)fetchGuestFansGroupInfoWithSecUid:(id)a0 onlyShowJoined:(BOOL)a1 extraInfo:(id)a2 completion:(id /* block */)a3;
- (void)fetchRecommendFansGroupInfoWithSecUid:(id)a0 recommendGroupIds:(id)a1 completion:(id /* block */)a2;
- (void)remindCreateFansGroupWithSecUid:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (void)createFansGroupWithCreateFansGroupModel:(id)a0 groupEntryLimitDict:(id)a1 completion:(id /* block */)a2;
- (void)createFansGroupWithCreateFansGroupModel:(id)a0 groupEntryLimitDict:(id)a1 sourceType:(long long)a2 createType:(id)a3 createExtra:(id)a4 bizExtra:(id)a5 completion:(id /* block */)a6;
- (void)updateMyExportFansGroupWithCids:(id)a0 source:(id)a1 completion:(id /* block */)a2;
- (void)applyJoinFansGroupWithCid:(id)a0 sourceType:(long long)a1 completion:(id /* block */)a2;
- (void)applyJoinFansGroupWithCid:(id)a0 sourceType:(long long)a1 invitationExtra:(id)a2 bizExtra:(id)a3 completion:(id /* block */)a4;
- (void)fetchMasterFansGroupInfoWithCursor:(long long)a0 conversationID:(long long)a1 scene:(long long)a2 completion:(id /* block */)a3;
- (void)trackFetchMyGroupListWithScene:(id)a0 isFirstRequest:(BOOL)a1 duration:(long long)a2 response:(id)a3 error:(id)a4;
- (void)trackFetchOtherGroupListWithScene:(id)a0 secOwnerId:(id)a1 duration:(long long)a2 response:(id)a3 error:(id)a4;
- (void)trackSetUserGroupListWithScene:(id)a0 cids:(id)a1 duration:(long long)a2 response:(id)a3 error:(id)a4;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
