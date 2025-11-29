@class IESLiveAioLinkCloseChannel, IESLiveAioLinkCreateChannel, IESLiveAioLinkWriteChannel, IESLiveAioLinkRegisterService;

@interface IESLiveAioLinkOperation : GPBMessage

@property (readonly, nonatomic) int dataOneOfCase;
@property (retain, nonatomic) IESLiveAioLinkCreateChannel *createChannel;
@property (retain, nonatomic) IESLiveAioLinkWriteChannel *writeChannel;
@property (retain, nonatomic) IESLiveAioLinkCloseChannel *closeChannel;
@property (retain, nonatomic) IESLiveAioLinkRegisterService *registerService;

+ (id)descriptor;

@end
