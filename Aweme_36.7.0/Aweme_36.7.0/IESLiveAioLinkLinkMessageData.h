@class HTSLiveLinkMessage, IESLiveAioLinkStateTransition;

@interface IESLiveAioLinkLinkMessageData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveLinkMessage *message;
@property (nonatomic) BOOL hasMessage;
@property (retain, nonatomic) IESLiveAioLinkStateTransition *stateTransition;
@property (nonatomic) BOOL hasStateTransition;

+ (id)descriptor;

@end
