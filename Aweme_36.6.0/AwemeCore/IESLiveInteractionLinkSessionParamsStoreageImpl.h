@class NSString, IESLiveInteractionLinkerInviteParams, IESLiveInteractionLinkerApplyParams, IESLiveInteractionLinkerParams, IESLiveInteractionLinkerCreateParams, IESLiveInteractionLinkerCloseParams, IESLiveInteractionLinkerLeaveParams, IESLiveInteractionLinkerPermitParams, IESLiveInteractionLinkerKickoutParams, IESLiveInteractionLinkerReplyParams;

@interface IESLiveInteractionLinkSessionParamsStoreageImpl : NSObject <IESLiveInteractionLinkSessionParamsStoreage>

@property (nonatomic) BOOL hasCreateParams;
@property (retain, nonatomic) IESLiveInteractionLinkerCreateParams *createParams;
@property (nonatomic) BOOL hasCloseParams;
@property (retain, nonatomic) IESLiveInteractionLinkerCloseParams *closeParams;
@property (nonatomic) BOOL hasLeaveParams;
@property (retain, nonatomic) IESLiveInteractionLinkerLeaveParams *leaveParams;
@property (nonatomic) BOOL hasApplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerApplyParams *applyParams;
@property (nonatomic) BOOL hasCancelApplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerParams *cancelApplyParams;
@property (nonatomic) BOOL hasReplyParams;
@property (retain, nonatomic) IESLiveInteractionLinkerReplyParams *replyParams;
@property (nonatomic) BOOL hasInviteParams;
@property (retain, nonatomic) IESLiveInteractionLinkerInviteParams *inviteParams;
@property (nonatomic) BOOL hasPermitParams;
@property (retain, nonatomic) IESLiveInteractionLinkerPermitParams *permitParams;
@property (nonatomic) BOOL hasKickoutParams;
@property (retain, nonatomic) IESLiveInteractionLinkerKickoutParams *kickoutParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
