@class IESLiveThemedCompetitionInfo, NSString, UIColor, HTSLiveLinkmicQuickInteract;
@protocol IESLiveCompetitionGameRouter, IESLiveInteractUserModel, IESLiveSocialInteractiveRouter, IESLiveRoomService;

@interface IESLiveInteractCompetitionGameGuestInfoViewModel : NSObject <IESLiveCompetitionGameLifeCycle>

@property (copy, nonatomic) NSString *avatarDecorationURL;
@property (retain, nonatomic) id<IESLiveInteractUserModel> user;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveSocialInteractiveRouter> socialInteractiveRouter;
@property (weak, nonatomic) id<IESLiveCompetitionGameRouter> competitionGameRouter;
@property (retain, nonatomic) IESLiveThemedCompetitionInfo *competitionInfo;
@property (readonly, nonatomic) BOOL fanTicketViewHidden;
@property (readonly, copy, nonatomic) NSString *fanTicketViewIconURL;
@property (readonly, nonatomic) BOOL enlargeFanTicketViewIcon;
@property (readonly, copy, nonatomic) NSString *fanTicketValue;
@property (readonly, nonatomic) UIColor *fanTicketViewBGColor;
@property (readonly, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateWithUserModel:(id)a0;
- (id)initWithDIContext:(id)a0 room:(id)a1;
- (void)competitonGameDidStart:(id)a0;
- (void)competitonGameScoreDidChange:(id)a0 scoreChangeUserId:(id)a1 quickInteract:(id)a2 rankUpdateInfo:(id)a3;
- (void)competitonGameDidEnd;
- (void)competitionGameDidStartResultShowTimeWithInfo:(id)a0 source:(long long)a1;
- (void)competitionGameDidEndResultShowTimeWithInfo:(id)a0;
- (BOOL)shouldUpdateScoreWithScoreInfo:(id)a0;
- (void).cxx_destruct;

@end
