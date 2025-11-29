@class IESLiveLinkMicAudienceGetSongInfoResponse_ResponseData;

@interface IESLiveLinkMicAudienceGetSongInfoResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceGetSongInfoResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
