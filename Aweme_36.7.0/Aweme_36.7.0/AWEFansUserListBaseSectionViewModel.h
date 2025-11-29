@class AWEUserActionRevertModel, AWEListDataController, NSString;

@interface AWEFansUserListBaseSectionViewModel : AWERelationUserListBaseSectionViewModel <AWEUserMessage, AWEUserActionRevertMessage>

@property (nonatomic) BOOL isRemovingFansOnAir;
@property (nonatomic) long long requestCount;
@property (nonatomic) BOOL isLastRevertModelFromFoldList;
@property (nonatomic) long long previousState;
@property (nonatomic) long long selectedCategory;
@property (readonly, nonatomic) AWEListDataController *baseDataController;
@property (retain, nonatomic) AWEUserActionRevertModel *revertActionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWERelationDOUYINHTSAdapterClass;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)setupViewModel;
- (id)enterFrom;
- (void)syncModelFollowStatus:(id)a0 status:(long long)a1;
- (BOOL)isFriends;
- (id)aAWERelationDOUYINHTSAdapter;
- (void)getRevertActionModel:(id)a0;
- (void)removeFan:(id)a0;
- (void)moreMenuForFan:(id)a0 user:(id)a1;
- (void)receiveUserRevertAction:(id)a0;
- (void)storePrepareRevertUserAction:(id)a0;
- (void)removeFanWithSnackBar:(id)a0;
- (void)trackRemoveFansToast:(id)a0 userID:(id)a1;
- (void)setupLastUserActionRevertModel:(id)a0 row:(long long)a1;
- (void)removeUsers:(id)a0 syncDataController:(BOOL)a1;
- (void)p_removeFan:(id)a0;
- (void)addRevertFan:(id)a0 index:(long long)a1;
- (void)refreshStateWhenRevert;
- (void)updateHidePostFromHer:(id)a0 status:(long long)a1;
- (void)updateShowMyPostToUser:(id)a0 status:(long long)a1;
- (void).cxx_destruct;
- (long long)type;
- (void)dealloc;
- (void)refreshState;
- (BOOL)isMine;

@end
