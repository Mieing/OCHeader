@interface HTSLiveOpenKtvComponentContent : IESLivePBBaseMessage

@property (nonatomic) BOOL openAudienceAddSongSwitch;
@property (nonatomic) BOOL openAudienceMultiChorusSwitch;
@property (nonatomic) BOOL openStageHideLyricsSwitch;

+ (id)descriptor;

@end
