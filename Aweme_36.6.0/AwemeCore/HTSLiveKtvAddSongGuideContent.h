@class HTSLiveText;

@interface HTSLiveKtvAddSongGuideContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
