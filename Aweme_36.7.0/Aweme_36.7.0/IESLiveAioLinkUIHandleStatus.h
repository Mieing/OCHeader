@class IESLiveAioLinkUIHandleStatus_HybridStatus;

@interface IESLiveAioLinkUIHandleStatus : IESLivePBBaseMessage

@property (readonly, nonatomic) int eventOneOfCase;
@property (retain, nonatomic) IESLiveAioLinkUIHandleStatus_HybridStatus *hybridStatus;

+ (id)descriptor;

@end
