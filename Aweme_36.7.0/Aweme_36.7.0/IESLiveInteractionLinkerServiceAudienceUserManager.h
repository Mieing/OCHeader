@class NSArray, NSMutableDictionary, NSMutableSet, NSString, IESLiveLinkMicSEIParserResult;
@protocol IESLiveInteractUserModel, IESLiveInteractionLinkerServiceUserService, IESLiveRoomService, IESLiveInteractionLinkerServiceUserManagerDelegate;

@interface IESLiveInteractionLinkerServiceAudienceUserManager : NSObject <IESLiveInteractionLinkerServiceUserManager>

@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveInteractionLinkerServiceUserManagerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveInteractionLinkerServiceUserService> userService;
@property (retain, nonatomic) id<IESLiveInteractUserModel> anchor;
@property (copy, nonatomic) NSArray *allMembersList;
@property (nonatomic) BOOL didJoinChannel;
@property (retain, nonatomic) NSMutableDictionary *linkmicIDToLinkTypeDic;
@property (retain, nonatomic) NSMutableSet *firstFrameReceivedSet;
@property (copy, nonatomic) NSArray *oldRegions;
@property (nonatomic) BOOL preStreamEnableFilterSameGrids;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastLinkMicSEIResult;
@property (nonatomic) BOOL disableSynchronization;
@property (nonatomic) BOOL disableUsersListFilter;
@property (nonatomic) BOOL isPreStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)receiveLinkmicPreloadInfo:(unsigned long long)a0 playModes:(id)a1 userLists:(id)a2;
- (void)updateWithPushGrids:(id)a0;
- (void)broadcastUserListChange;
- (void)updateWithServerUsersList:(id)a0 disableUserFilter:(BOOL)a1;
- (BOOL)isFirstFrameReceivedWithLinkmicID:(id)a0;
- (void)updateWithServerUsersList:(id)a0;
- (id)initWithUserService:(id)a0 room:(id)a1 delegate:(id)a2;
- (void)updateWithSEIResult:(id)a0;
- (void)updateWithJoinChannel;
- (void)updateWithLeaveChannel;
- (void)updateFirstFrameReceivedSetWithLinkmicID:(id)a0;
- (void)updateUserVideoModeOn:(BOOL)a0 linkmicID:(id)a1;
- (void)updateUserOfflineWithLinkmicID:(id)a0;
- (void)logForOldList:(id)a0 newList:(id)a1;
- (void)loadPreloadUserList;
- (void)updateUserSpeakingWithResult:(id)a0;
- (BOOL)isSameGirdsOld:(id)a0 new:(id)a1;
- (id)crossRoomUserPosition:(long long)a0 isOtherRoom:(BOOL)a1 uiLayout:(long long)a2;
- (BOOL)isAnchorUser:(id)a0;
- (id)logStrWithGrids:(id)a0;
- (id)logStrForList:(id)a0;
- (BOOL)isSameRegionOld:(id)a0 new:(id)a1;
- (void)resumeFirstFrameSetByUsersArray:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clean;

@end
