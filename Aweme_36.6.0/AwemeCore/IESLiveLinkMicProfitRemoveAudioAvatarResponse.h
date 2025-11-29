@class IESLiveLinkMicProfitRemoveAudioAvatarResponse_ResponseData;

@interface IESLiveLinkMicProfitRemoveAudioAvatarResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitRemoveAudioAvatarResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
