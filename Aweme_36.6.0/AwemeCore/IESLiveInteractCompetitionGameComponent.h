@class IESLiveThemedCompetitionInfo, NSString, IESLiveInteractCompetitionGameAPI, IESLiveInteractCompetitionGameResourceController;

@interface IESLiveInteractCompetitionGameComponent : IESLiveInteractComponentBase <IESLiveCompetitionGameRouter, HTSLiveMessageSubscriber, IESLiveSocialInteractAction>

@property (nonatomic) BOOL isInCompetitionGame;
@property (retain, nonatomic) IESLiveThemedCompetitionInfo *competitiomInfo;
@property (copy, nonatomic) NSString *source;
@property (readonly, nonatomic) IESLiveInteractCompetitionGameAPI *competitionGameAPI;
@property (retain, nonatomic) IESLiveInteractCompetitionGameResourceController *resourceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)interactionModeEndedWithLayout:(id)a0;
- (void)showCompetitonGameStartPanel:(id)a0;
- (void)showCompetitionGameRankList:(id)a0 nickName:(id)a1;
- (BOOL)isInCompetitionGameScoreType;
- (id)currentCompetitonInfo;
- (id)seatStrForCompetitionGame:(BOOL)a0;
- (BOOL)seatinfosIncludePerformer:(id)a0;
- (id)seatInfosOnlyPerformer:(id)a0;
- (void)setUser:(id)a0 asPerformerWithCallback:(id /* block */)a1;
- (void)unsetUser:(id)a0 asPerformerWithCallback:(id /* block */)a1;
- (long long)competitionGameRoleOfUser:(id)a0;
- (unsigned long long)interactionPanelOptionItemTypeForUser:(id)a0;
- (void)componentBindContext;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)componentEnterRoom;
- (void)componentLeaveRoom;
- (void)startCompetitionGameIfNeedWithRoom:(id)a0;
- (void)tr_trackCompetitionGameEnd;
- (BOOL)couldStartCompetitionGame;
- (void)tr_trackCompetitionGameStart;
- (int)currentCompetitionType;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
