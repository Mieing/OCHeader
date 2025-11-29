@interface IESLiveAioLinkUpdateAutoMatchStateParams : IESLivePBBaseMessage

@property (nonatomic) long long matchType;
@property (nonatomic) int event;

+ (id)descriptor;

@end
