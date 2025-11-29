@class HTSLiveText;

@interface HTSLiveCreateTeamfightGuideContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *toastText;
@property (nonatomic) BOOL hasToastText;

+ (id)descriptor;

@end
