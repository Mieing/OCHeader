@interface GetKTVComponentSettingResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) BOOL openAudienceAddSongSwitch;
@property (nonatomic) int openSource;
@property (nonatomic) BOOL openAudienceMultiChorusSwitch;
@property (nonatomic) BOOL openStageHideLyricsSwitch;
@property (nonatomic) BOOL openRealtimeChorusSwitch;

+ (id)descriptor;

@end
