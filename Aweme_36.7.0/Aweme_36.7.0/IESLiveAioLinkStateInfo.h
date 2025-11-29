@interface IESLiveAioLinkStateInfo : IESLivePBBaseMessage

@property (nonatomic) int state;
@property (nonatomic) long long channelId;

+ (id)descriptor;

@end
