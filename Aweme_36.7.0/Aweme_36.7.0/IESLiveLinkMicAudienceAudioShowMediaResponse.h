@class IESLiveLinkMicAudienceAudioShowMediaResponse_ResponseData;

@interface IESLiveLinkMicAudienceAudioShowMediaResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceAudioShowMediaResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
