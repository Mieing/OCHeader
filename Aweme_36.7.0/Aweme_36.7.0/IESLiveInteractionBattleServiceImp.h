@class NSMutableDictionary, NSDictionary, NSString, IESLiveInteractionBattleAPI;

@interface IESLiveInteractionBattleServiceImp : NSObject <IESLiveInteractionBattleService, IESLiveBigPartyActions, IESLiveMultiAudioAction>

@property (retain, nonatomic) IESLiveInteractionBattleAPI *battleApi;
@property (nonatomic) BOOL shouldMonitorEnterRoom;
@property (retain, nonatomic) NSMutableDictionary *enterRoomTimeStampDict;
@property (nonatomic) double enterRoomTimestamp;
@property (nonatomic) int redTeamProfitEggStatus;
@property (copy, nonatomic) NSDictionary *redTeamProfitEggTrackInfo;
@property (copy, nonatomic) NSString *starWishRequestPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bigPartyAllMembersListDidChange:(id)a0;
- (void)multiAudioAllMembersListDidChange:(id)a0;
- (int)currentPlayMode;
- (void)updateProfitEggStatusWithExtra:(id)a0;
- (void)monitorWithAnimationFailure:(id)a0 error:(id)a1 module:(unsigned long long)a2 animType:(long long)a3;
- (long long)teamFightSignWithUserPosition:(int)a0 teamFightType:(long long)a1;
- (int)userPositionWithUserId:(id)a0;
- (void)recordTimeStampWithKeyIfNeed:(id)a0;
- (void)checkShouldMonitorEnterRoom;
- (void)openStarwishPanelWithRequestPage:(id)a0;
- (void)cleanStarwishRequestPage;
- (id)animTypeStr:(long long)a0;
- (void)monitorWithEnterRoom;
- (void).cxx_destruct;
- (id)init;

@end
