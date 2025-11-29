@class IESLiveKtvSongStruct;

@interface IESLiveLinkMicAudienceGetSongInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) BOOL hasSong;

+ (id)descriptor;

@end
