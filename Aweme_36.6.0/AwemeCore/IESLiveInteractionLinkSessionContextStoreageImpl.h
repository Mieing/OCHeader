@class NSString;
@protocol IESLiveInteractionLinkerJoinChannelContextProtocol, IESLiveInteractionLinkerCancelWaitingContextProtocol, IESLiveInteractionLinkerReplyContextProtocol, IESLiveInteractionLinkerLeaveContextProtocol, IESLiveInteractionLinkerApplyContextProtocol, IESLiveInteractionLinkerCloseContextProtocol, IESLiveInteractionLinkerInviteContextProtocol, IESLiveInteractionLinkerKickoutContextProtocol, IESLiveInteractionLinkerDisconnectContextProtocol, IESLiveInteractionLinkerCreateContextProtocol;

@interface IESLiveInteractionLinkSessionContextStoreageImpl : NSObject <IESLiveInteractionLinkSessionContextStoreage>

@property (nonatomic) BOOL hasCreateContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCreateContextProtocol> createContext;
@property (nonatomic) BOOL hasCloseContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCloseContextProtocol> closeContext;
@property (nonatomic) BOOL hasInviteContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerInviteContextProtocol> inviteContext;
@property (nonatomic) BOOL hasApplyContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerApplyContextProtocol> applyContext;
@property (nonatomic) BOOL hasReplyContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerReplyContextProtocol> replyContext;
@property (nonatomic) BOOL hasJoinChannelContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerJoinChannelContextProtocol> joinChannelContext;
@property (nonatomic) BOOL hasLeaveContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerLeaveContextProtocol> leaveContext;
@property (nonatomic) BOOL hasKickoutContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerKickoutContextProtocol> kickoutContext;
@property (nonatomic) BOOL hasDisconnectContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerDisconnectContextProtocol> disconnectContext;
@property (nonatomic) BOOL hasCancelWaitingContext;
@property (retain, nonatomic) id<IESLiveInteractionLinkerCancelWaitingContextProtocol> cancelWaitingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
