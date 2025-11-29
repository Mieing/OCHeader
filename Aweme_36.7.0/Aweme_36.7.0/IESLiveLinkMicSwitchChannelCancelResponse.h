@class IESLiveLinkMicSwitchChannelCancelResponse_ResponseData;

@interface IESLiveLinkMicSwitchChannelCancelResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicSwitchChannelCancelResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
