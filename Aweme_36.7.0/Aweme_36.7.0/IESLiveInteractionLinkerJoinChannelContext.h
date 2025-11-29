@class IESLiveLinkmicLinkAudienceJoinChannelContext, IESLiveLinkMicAudienceJoinChannelResponse_DelegateSetting, IESLiveMsgBoardItemInfo, NSString, NSObject;

@interface IESLiveInteractionLinkerJoinChannelContext : NSObject <IESLiveInteractionLinkerJoinChannelContextProtocol>

@property (retain, nonatomic) IESLiveLinkmicLinkAudienceJoinChannelContext *linkmicContext;
@property (readonly, nonatomic) long long payCount;
@property (readonly, nonatomic) BOOL isPaidLinkmic;
@property (readonly, nonatomic) IESLiveMsgBoardItemInfo *msgBoardItem;
@property (readonly, nonatomic) int applyType;
@property (readonly, nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_DelegateSetting *delegateSetting;
@property (copy, nonatomic) NSString *joinChannelPrompt;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, nonatomic) NSObject *rawData;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLinkmicLinkAudienceJoinChannelContext:(id)a0;
- (void).cxx_destruct;

@end
