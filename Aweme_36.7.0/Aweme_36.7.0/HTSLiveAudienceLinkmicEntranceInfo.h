@class NSString, HTSLiveImage;

@interface HTSLiveAudienceLinkmicEntranceInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *text;

+ (id)descriptor;

@end
