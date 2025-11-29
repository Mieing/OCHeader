@class NSString, UrlStructV2;

@interface EffectGuideStructV2 : GPBMessage

@property (nonatomic) BOOL showGuide;
@property (nonatomic) BOOL hasShowGuide;
@property (retain, nonatomic) UrlStructV2 *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *effectId;
@property (nonatomic) BOOL hasEffectId;
@property (copy, nonatomic) NSString *effectName;
@property (nonatomic) BOOL hasEffectName;

+ (id)descriptor;

- (id)effectName;
- (id)effectId;
- (id)icon;
- (BOOL)showGuide;

@end
