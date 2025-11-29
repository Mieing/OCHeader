@interface OpenKTVComponentResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) BOOL openAudienceAddSongSwitch;
@property (nonatomic) BOOL openAudienceMultiChorusSwitch;
@property (nonatomic) BOOL canAutoTurnOnSingChallenge;
@property (nonatomic) BOOL openStageHideLyricsSwitch;
@property (nonatomic) BOOL openRealtimeChorusSwitch;

+ (id)descriptor;

@end
