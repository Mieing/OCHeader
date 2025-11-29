@class IESLiveLinkMicProfitGetAudioAvatarListResponse_ResponseData;

@interface IESLiveLinkMicProfitGetAudioAvatarListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitGetAudioAvatarListResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
