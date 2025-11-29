@class IESLiveKTVComponentContext, IESLiveInteractionInvitationPanel, NSMutableDictionary, NSString, IESLivePartyKTVChorusApi;
@protocol IESLiveKTVCommonOuterService, IESLiveInteractiveInviteService;

@interface IESLiveKTVGroupLiveChorusComponent : IESLiveInteractComponentBase <IESLiveKTVGroupLiveChorusService, IESLiveKTVActions>

@property (retain, nonatomic) IESLivePartyKTVChorusApi *api;
@property (weak, nonatomic) id<IESLiveKTVCommonOuterService> chorusService;
@property (weak, nonatomic) id<IESLiveInteractiveInviteService> inviteService;
@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (nonatomic) BOOL hasInvited;
@property (weak, nonatomic) IESLiveInteractionInvitationPanel *invitePanel;
@property (retain, nonatomic) NSMutableDictionary *invitedMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentBindContext;
- (void)didUpdateKTVStageState:(unsigned long long)a0;
- (void)onInviteMoreAction;
- (void)popUpInviteFriendsPanel;
- (void)showAnchorInvitationPanel;
- (void).cxx_destruct;
- (id)trackData;

@end
