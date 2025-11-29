@class IESLiveKtvSongStruct;

@interface PersonalKaraokeAnchorGetSongInfoResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveKtvSongStruct *song;
@property (nonatomic) BOOL hasSong;
@property (nonatomic) long long sungCount;

+ (id)descriptor;

@end
