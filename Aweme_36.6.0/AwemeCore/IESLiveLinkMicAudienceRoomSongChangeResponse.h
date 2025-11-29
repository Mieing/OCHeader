@class IESLiveLinkMicAudienceRoomSongChangeResponse_ResponseData;

@interface IESLiveLinkMicAudienceRoomSongChangeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveLinkMicAudienceRoomSongChangeResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
