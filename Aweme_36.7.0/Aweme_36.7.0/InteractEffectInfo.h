@class NSString, HTSLiveImage;

@interface InteractEffectInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *resourceId;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *pcEffectId;

+ (id)descriptor;

@end
