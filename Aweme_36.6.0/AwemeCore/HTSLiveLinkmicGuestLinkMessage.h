@class HTSLiveLinkmicGuestLinkInvitationGuideContent, HTSLiveLinkmicGuestLinkMatchmakingContent, HTSLiveLinkmicGuestLinkReplyMatchmakingContent, HTSLiveLinkmicGuestChannelInfoUpdateContent, HTSLiveCommon, HTSLiveLinkmicGuestLinkReplyContent, HTSLiveLinkmicGuestLinkJoinLinkedChannelContent, HTSLiveLinkmicGuestChannelFinishContent, HTSLiveLinkmicGuestLinkInviteContent;

@interface HTSLiveLinkmicGuestLinkMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkInvitationGuideContent *invitationGuideContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkInviteContent *inviteContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkReplyContent *replyContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkMatchmakingContent *matchmakingContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestChannelInfoUpdateContent *channelUpdateContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkReplyMatchmakingContent *replyMatchmakingContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestLinkJoinLinkedChannelContent *joinLinkedChannelContent;
@property (retain, nonatomic) HTSLiveLinkmicGuestChannelFinishContent *finishChannelContent;

+ (id)descriptor;

@end
