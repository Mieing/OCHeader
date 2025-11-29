@class NSString, RingBackDetail, MusicLiveGetSongStatusResp_MusicianInfo, BaseResponse;

@interface MusicLiveGetSongStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *lyric;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumUrl;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *publicTime;
@property (nonatomic) unsigned long long publicTimeS;
@property (retain, nonatomic) NSString *androidDownloadUrl;
@property (retain, nonatomic) RingBackDetail *ringBackDetail;
@property (retain, nonatomic) MusicLiveGetSongStatusResp_MusicianInfo *musician;

+ (void)initialize;

@end
