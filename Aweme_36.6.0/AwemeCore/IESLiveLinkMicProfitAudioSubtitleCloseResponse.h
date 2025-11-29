@class IESLiveLinkMicProfitAudioSubtitleCloseResponse_ResponseData;

@interface IESLiveLinkMicProfitAudioSubtitleCloseResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicProfitAudioSubtitleCloseResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
