@class HTSLiveLinkMicMethod_InvitorInfo, IESLiveGameInviteInfo, IESLiveMsgBoardItemInfo, NSArray, HTSLiveJoinTeamfightInfo, NSString, HTSLiveImage, NSObject, IESLiveLinkmicLinkAudienceInviteContext, HTSLiveText;

@interface IESLiveInteractionLinkerInviteContext : NSObject <IESLiveInteractionLinkerInviteContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceInviteContext *linkmicContext;
@property (readonly, nonatomic) HTSLiveLinkMicMethod_InvitorInfo *invitorInfo;
@property (readonly, nonatomic) HTSLiveJoinTeamfightInfo *joinTeamfightInfo;
@property (readonly, nonatomic) IESLiveGameInviteInfo *gameInviteInfo;
@property (readonly, nonatomic) IESLiveMsgBoardItemInfo *msgBoardItem;
@property (readonly, nonatomic) HTSLiveText *inviteMessage;
@property (readonly, nonatomic) NSArray *noticeInfosArray;
@property (readonly, copy, nonatomic) NSString *secFromUserId;
@property (readonly, copy, nonatomic) NSString *fromUserId;
@property (readonly, nonatomic) int inviteSource;
@property (readonly, copy, nonatomic) NSString *invitePrompt;
@property (readonly, copy, nonatomic) HTSLiveImage *inviteImage;
@property (readonly, copy, nonatomic) NSString *inviteSubtitle;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceInviteContext:(id)a0;
- (id)initWithLinkMicMethod:(id)a0;
- (void).cxx_destruct;

@end
