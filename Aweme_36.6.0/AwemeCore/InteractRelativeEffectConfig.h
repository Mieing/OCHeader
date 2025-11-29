@class HTSLiveImage;

@interface InteractRelativeEffectConfig : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;

+ (id)descriptor;

@end
