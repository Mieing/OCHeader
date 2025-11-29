@class IESLiveAioLinkUIHandleStatus_HybridStatus_FailedInfo;

@interface IESLiveAioLinkUIHandleStatus_HybridStatus : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (readonly, nonatomic) int dataOneOfCase;
@property (retain, nonatomic) IESLiveAioLinkUIHandleStatus_HybridStatus_FailedInfo *failedInfo;

+ (id)descriptor;

@end
