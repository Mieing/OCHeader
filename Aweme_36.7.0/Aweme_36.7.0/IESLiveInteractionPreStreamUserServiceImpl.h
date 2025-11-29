@class NSArray, NSDictionary, NSString, IESLiveInteractionLinkerServiceAudienceUserManager, IESLiveInteractiveListAPI;
@protocol IESLiveInteractUserModel, IESLiveDataSyncService, IESLiveInteractionPreStreamUserServiceDelegate, IESLiveRoomService;

@interface IESLiveInteractionPreStreamUserServiceImpl : NSObject <IESLiveInteractionLinkerServiceUserManagerDelegate, IESLiveInteractionPreStreamUserService, IESLiveInteractionLinkerServiceUserService>

@property (retain, nonatomic) IESLiveInteractiveListAPI *api;
@property (nonatomic) BOOL isFetchingList;
@property (copy, nonatomic) NSArray *oldRegions;
@property (retain, nonatomic) id<IESLiveInteractUserModel> me;
@property (retain, nonatomic) id<IESLiveInteractUserModel> anchorInteractUserModel;
@property (copy, nonatomic) NSArray *serverUsersList;
@property (copy, nonatomic) NSDictionary *othersMembersList;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveInteractionLinkerServiceAudienceUserManager *userManager;
@property (copy, nonatomic) NSArray *interactAllUsersList;
@property (weak, nonatomic) id<IESLiveDataSyncService> dataSyncService;
@property (nonatomic) BOOL enableAutoFetchList;
@property (nonatomic) BOOL disableUsersListFilter;
@property (copy, nonatomic) NSDictionary *listV2ExtraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveInteractionPreStreamUserServiceDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *allMembersList;

- (void)didSetAttachingDIContext;
- (void)fetchList;
- (id)userByLinkmicId:(id)a0;
- (id)userModelWrapperConfig;
- (BOOL)updateSomeoneSpeaking:(id)a0 talking:(unsigned long long)a1;
- (void)interactionLinkerServiceUserManager:(id)a0 listDidChange:(id)a1;
- (void)updateWithSEIResult:(id)a0;
- (BOOL)isSameGirdsOld:(id)a0 new:(id)a1;
- (id)otherUserByLinkmicID:(id)a0;
- (BOOL)isSameRegionOld:(id)a0 new:(id)a1;
- (void)updateWithWRDSResult:(id)a0 disableUserFilter:(BOOL)a1;
- (void)setupUserManager;
- (void)updateOtherMembersSpeaking:(id)a0;
- (void)handleListUsers:(id)a0 linkerContentMap:(id)a1 clientUIInfo:(id)a2 disableUserFilter:(BOOL)a3;
- (id)transformOtherMembersList:(id)a0;
- (id)buildUserWrapper:(id)a0;
- (void)handleClientPositionWithSelfUsersList:(id)a0 othersMembersList:(id)a1 clientUIInfo:(id)a2;
- (void)updateActivedUsersForceAfkStatus:(BOOL)a0;
- (void)handleListUsers:(id)a0 linkerContentMap:(id)a1 clientUIInfo:(id)a2;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 room:(id)a1;
- (void)clean;

@end
